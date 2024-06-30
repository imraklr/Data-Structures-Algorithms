#include <stdio.h>

int main() {

    int i, *pi;

    printf("Pointer pi = %p\n", pi);
    printf("i = %d\n", i); // garbage value
    printf("address of i = %p\n", (void*)&i);

    pi = &i;
    i = 103;

    printf("pointer pointed value = %d\n", *pi);

    return 0;
}