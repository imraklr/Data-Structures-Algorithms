#include <stdio.h>

int main() {

    int i, *pi;

    printf("i = %d\n", i); // garbage value
    printf("address of i = %p\n", (void*)&i);

    printf("Value held by pi pointer = %d\n", *pi); // 0

    printf("Address of pi = %p\n", pi);

    pi = &i;
    i = 103;

    printf("pointer pointed value = %d\n", *pi);


    printf("Address of pi = %p\n", pi);
    printf("Address of &pi = %p\n", &pi);

    return 0;
}