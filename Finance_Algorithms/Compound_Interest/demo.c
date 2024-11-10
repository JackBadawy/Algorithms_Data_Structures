#include <stdio.h>
#include "compoundInterest.h"

int main() {
    float principal, rate, result;
    int timeMonths, freqChoice;
    CompoundingFrequency freq;

    printf("What is your principal amount?\n");
    scanf("%f", &principal);

    printf("\nWhat is the interest rate PA?\n");
    scanf("%f", &rate);

    printf("\nHow many months has interest been compounding?\n");
    scanf("%d", &timeMonths);

    printf("\nSelect compounding frequency:\n");
    printf("\n1. Daily\n2. Weekly\n3. Monthly\n4. Quarterly\n");
    printf("5. Annually\n6. Continuous\n");
    scanf("%d", &freqChoice);

    switch(freqChoice)
    {
        case 1: freq = Daily; break;
        case 2: freq = Weekly; break;
        case 3: freq = Monthly; break;
        case 4: freq = Quarterly; break;
        case 5: freq = Annually; break;
        case 6: freq = Continuous; break;
        default: freq = Monthly;
    }

    result = calculateCompoundInterest(principal, rate, timeMonths, freq);
    printf("\nTotal Value with compound interest: %.2f\n", result);

    return 0;
}
