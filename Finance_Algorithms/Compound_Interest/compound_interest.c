#include <stdio.h>
#include "compound_interest.h"

float power_of(float num, int power)
{
    float pow = 1;
    int i;
    for (i = 0; i < power; i++) {
        pow = pow * num;
    }
    return pow;
}

float calculate_compound_interest(float principal, float rate, int time)
{
    float real_rate = rate * 0.01;
    real_rate = real_rate / 12;
    return principal * power_of(1 + real_rate, time);
}
