# Compound Interest Calculator

Compound interest is interest earned on both the initial principal and previously accumulated interest.

## Compound Interest Formula

$A = P(1 + \frac{r}{n})^{nt}$

Where:

- $A$ = Final amount
- $P$ = Principal (initial investment)
- $r$ = Annual interest rate (in decimal form)
- $n$ = Number of times interest is compounded per year (12 for monthly)
- $t$ = Time in years

For example compounding monthly would be:

$A = P(1 + \frac{r}{12})^{12t}$

## Implementation

This program calculates compound interest using:

- Principal (initial investment amount)
- Rate (annual interest rate as a percentage)
- Time (duration in months)
- Result (calculated final amount)

### Program Flow

1. User inputs the principal amount
2. User inputs the annual interest rate (as a percentage)
3. User inputs the time period in months
4. Program converts annual rate to monthly rate (rate/12)
5. Program calculates compound interest using the formula above
6. Final result is displayed with 2 decimal places

### Power of Implementation

```c
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
```
