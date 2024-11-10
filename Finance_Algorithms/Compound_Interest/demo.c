#include <stdio.h>
#include "compound_interest.h"

int main() {
    float principal, rate, result;
    int time, freq_choice;
    CompoundingFrequency freq;

    printf("What is your principal amount?\n");
    scanf("%f", &principal);

    printf("\nWhat is the interest rate PA?\n");
    scanf("%f", &rate);

    printf("\nHow many months has interest been compounding?\n");
    scanf("%d", &time);

    printf("\nSelect compounding frequency:\n");
    printf("\n1. Daily\n2. Weekly\n3. Monthly\n4. Quarterly\n");
    printf("5. Annually\n6. Continuous\n");
    scanf("%d", &freq_choice);

    switch(freq_choice) {
        case 1: freq = DAILY; break;
        case 2: freq = WEEKLY; break;
        case 3: freq = MONTHLY; break;
        case 4: freq = QUARTERLY; break;
        case 5: freq = ANNUALLY; break;
        case 6: freq = CONTINUOUS; break;
        default: freq = MONTHLY;
    }

    result = calculate_compound_interest(principal, rate, time, freq);
    printf("\nTotal Value with compound interest: %.2f\n", result);

    return 0;
}
