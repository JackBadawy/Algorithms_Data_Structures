#include <stdio.h>
#include "compoundInterest.h"

float powerOf(float num, int power)
{
    float pow = 1;
    int i;
    for (i = 0; i < power; i++) pow = pow * num;

    return pow;
}

float calculateEPower(float x)
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

float calculateCompoundInterest(float principal, float rate, int timeMonths, CompoundingFrequency freq)
{
    float annualRate = rate * 0.01;
    float timeYears = timeMonths / 12.0;

    if (freq == Continuous)
    {
        return principal * calculateEPower(annualRate * timeYears);
    }
    else
    {
        float n = (float)freq;
        float periodicRate = annualRate / n;
        int periods = n * timeYears;
        return principal * powerOf(1 + periodicRate, periods);
    }
}
