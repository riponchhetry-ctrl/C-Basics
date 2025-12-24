#include <stdio.h>
#include <math.h>   // Required for pow() function

int main() {
    double principal, rate, time, amount, compoundInterest;

    // Taking input from user
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%lf", &time);

    // Calculating compound interest
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Output result
    printf("\nCompound Interest = %.2lf", compoundInterest);
    printf("\nTotal Amount after %.2lf years = %.2lf\n", time, amount);

    return 0;
}

