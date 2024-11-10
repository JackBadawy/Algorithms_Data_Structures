#ifndef COMPOUND_INTEREST_H
#define COMPOUND_INTEREST_H

typedef enum
{
    Daily = 365,
    Weekly = 52,
    Monthly = 12,
    Quarterly = 4,
    Annually = 1,
    Continuous = 0
} CompoundingFrequency;

float powerOf(float num, int power);
float calculateCompoundInterest(float principal, float rate, int timeMonths, CompoundingFrequency freq);
float calculateEPower(float x);

#endif
