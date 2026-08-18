#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, si, ci, amount;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    // Simple Interest
    si = (p * r * t) / 100;

    // Compound Interest
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}