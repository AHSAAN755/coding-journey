#include <stdio.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;
    int i;

    // Input
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100.0;

    // Compound Interest (calculated using loop)
    amount = principal;
    for (i = 0; i < (int)time; i++) {
        amount = amount * (1 + rate / 100.0);
    }
    compoundInterest = amount - principal;

    // Output
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}

