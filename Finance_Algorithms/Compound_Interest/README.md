# Compound Interest Calculator

Compound interest is interest earned on both the initial principal and previously accumulated interest.

## Compound Interest Formulas

### Discrete Compounding

$A = P(1 + \frac{r}{n})^{nt}$

Where:

- $A$ = Final amount
- $P$ = Principal (initial investment)
- $r$ = Annual interest rate (in decimal form)
- $n$ = Number of times interest is compounded per year
- $t$ = Time in years

### Continuous Compounding

$A = Pe^{rt}$

Where:

- $e$ = Euler's number (approximated using Taylor series)
- Other variables same as above

## Implementation

This program calculates compound interest with support for different compounding frequencies:

- Daily (365 times per year)
- Weekly (52 times per year)
- Monthly (12 times per year)
- Quarterly (4 times per year)
- Annually (once per year)
- Continuous (using e^x approximation)

### Program Flow

1. User inputs the principal amount
2. User inputs the annual interest rate (as a percentage)
3. User inputs the time period in months
4. User selects compounding frequency
5. Program calculates compound interest based on selected frequency
6. Final result is displayed with 2 decimal places

### Key Functions

#### Power of Implementation

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

#### Euler's Number Approximation (for continuous compounding)

```c
float calculateEPower(float x)
{
    float sum = 1.0;
    float term = 1.0;
    int i;

    for (i = 1; i <= 10; i++) {
        term *= x / i;
        sum += term;
    }
    return sum;
}
```

## Complexity Analysis

- Time Complexity: O(n) for discrete compounding, where n is the number of periods
- Space Complexity: O(1)

## Usage

Below example calculates compound interest on $1000 at 5% APR for 12 months, compounded monthly:

```c
float result = calculateCompoundInterest(1000, 5.0, 12, Monthly);
```

## Notes

- Implementation uses custom power function instead of math.h to minimize dependencies
- Continuous compounding uses Taylor series approximation of e^x
- All calculations use float precision
