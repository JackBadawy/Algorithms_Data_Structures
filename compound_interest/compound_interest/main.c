#include <stdio.h>

float calculateCompoundInterest(float principle, float rate, int time);
float powerOf(float num, int power);

int main()
{
    float principle, rate, result;
    int time;

    printf("What is your principle amount?\n");
    scanf("%f", &principle);

    printf("What is the interest rate PA?\n");
    scanf("%f", &rate);

    printf("how many months has interest been compounding?\n");
    scanf("%d", &time);

    result = calculateCompoundInterest(principle, rate, time);

    printf("Total Valvue with compound interest: %.2f\n", result);

    return 0;
}

float calculateCompoundInterest(float principle, float rate, int time)
{
    float realRate = rate * 0.01;
    realRate = realRate / 12;
    return principle * powerOf(1 + realRate, time);
}

float powerOf(float num, int power)
{
    float pow = 1;
    int i;
    for (i = 0; i < power; i++)
    {
        pow = pow * num;
    }
    return pow;
}
