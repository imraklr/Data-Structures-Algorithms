#include <stdio.h>

typedef long long int lli;

lli fact(int n);

int main() {
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    lli factorial = 1LL;
    int n_copy = n;
    while(n_copy > 1) {
        factorial *= n_copy;
        n_copy--;
    }

    printf("n! = %lld (loop)\n",factorial);

    // recursive way
    printf("n! = %lld (recursive)\n", fact(n));
}

lli fact(int n) {
    if(n > 1)
        return n*fact(n-1);
    else
        return 1;
}