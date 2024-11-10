#include <stdio.h>
#include "compound_interest.h"

float power_of(float num, int power)
{
    float pow = 1;
    int i;
    for (i = 0; i < power; i++) pow = pow * num;

    return pow;
}

float calculate_e_power(float x)
{
    float sum = 1.0;
    float term = 1.0;
    int i;

    for (i = 1; i <= 10; i++)
    {
        term *= x / i;
        sum += term;
    }
    return sum;
}

float calculate_compound_interest(float principal, float rate, int time_months, CompoundingFrequency freq)
{
    float annual_rate = rate * 0.01;
    float time_years = time_months / 12.0;

    if (freq == CONTINUOUS)
    {
       return principal * calculate_e_power(annual_rate * time_years);
    }
    else
    {

        float n = (float)freq;
        float periodic_rate = annual_rate / n;
        int periods = n * time_years;
        return principal * power_of(1 + periodic_rate, periods);
    }
}
