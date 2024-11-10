#ifndef COMPOUND_INTEREST_H
#define COMPOUND_INTEREST_H

typedef enum
{
    DAILY = 365,
    WEEKLY = 52,
    MONTHLY = 12,
    QUARTERLY = 4,
    ANNUALLY = 1,
    CONTINUOUS = 0
} CompoundingFrequency;

float power_of(float num, int power);
float calculate_compound_interest(float principal, float rate, int time_months, CompoundingFrequency freq);
float calculate_e_power(float x);

#endif
