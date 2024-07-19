#include <stdio.h>

int main() {

    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    int m = (n - 2);
    if(m < 0)
        m = 1;
    
    int n_copy = n;

    while(n > 0 && m > 0) {
        if(n_copy%m==0)
            n-=m;
        --m;
    }

    if(n < 0) {
        printf("Nope. n is not the sum of its divisors");
    } else if(n == 0 && m == 0) {
        printf("Yup n is the sum of its divisors");
    } else {
        printf("Nope. n is not the sum of its divisors");
    }

    return 0;
}