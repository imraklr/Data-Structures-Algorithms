#include <stdio.h>

void fibo(int a, int b, int c, int level, int depth);

int main() {

    int a = 0, b = 1;
    int num = 0;

    int n = 35;
    printf("%d ", num);
    n--;
    num = 1;
    printf("%d ", num);
    while(n >= 1) {
        num = a + b;
        printf("%d ", num);

        a = b;
        b = num;

        --n;
    }

    printf("\n");
    fibo(0, 1, 0, 1, 35);   

    return 0;
}

void fibo(int a, int b, int c, int level, int depth) {
    if(level!=depth+1) {
        printf("%d, ", c);
        fibo(b, a+b, b, level+1, depth); // depth can be removed to use level from higher depth to lower depth
    }
}