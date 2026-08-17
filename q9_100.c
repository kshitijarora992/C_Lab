// Q9 (User Inputs, Operations & Output)
// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;
    float simpleInterest, compoundInterest;

    scanf("%f %f %f", &p, &r, &t);

    simpleInterest = (p * r * t) / 100;
    compoundInterest = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest=%.0f, Compound Interest=%.1f", simpleInterest, compoundInterest);

    return 0;
}