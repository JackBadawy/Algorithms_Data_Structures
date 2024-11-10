#include <stdio.h>
#include "compound_interest.h"

int main() {
    float principal, rate, result;
    int time;

    printf("What is your principle amount?\n$");
    scanf("%f", &principal);
    printf("What is the interest rate PA?\n");
    scanf("%f", &rate);
    printf("How many months has interest been compounding?\n");
    scanf("%d", &time);

    result = calculate_compound_interest(principal, rate, time);
    printf("Total Value with compound interest: $%.2f\n", result);

    return 0;
}
