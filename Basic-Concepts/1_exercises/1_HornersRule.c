#include <stdio.h>

typedef long long int lli;

lli hornerPolySolve(int n, int x, int a[]);

int main() {

    // Horner's Rule for evaluating polynomials:
    // flatten the expression to contain x with degree 1 for each x in the expression
    
    // Example usage:
    int coefficients[] = {-1, 2, -6, 2}; // Polynomial: -x^3 + 2x^2 - 6x + 2
    int degree = 3;
    int x = 3;
    lli result = hornerPolySolve(degree, x, coefficients);
    printf("The value of the polynomial at x = %d is %lld\n", x, result);

    return 0;
}

lli hornerPolySolve(int n, int x, int a[]) {
    lli solvedSum = 0LL;
    for(int i=0;i<n;i++) {
        if(i != 0)
            solvedSum = x*solvedSum + a[i+1];
        else
            solvedSum = a[i]*x + a[i+1];
    }

    return solvedSum;
}