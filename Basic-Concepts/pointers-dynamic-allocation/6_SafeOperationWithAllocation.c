#include <stdio.h>
#include <stdlib.h>

int main() {

    // Example for safe operations with memory allocations
    // HINT: Just use if..else to check for NULL
    int *pi = (int*) malloc(sizeof(int));

    // check if memory allocation failed
    if(pi == NULL) {
        fprintf(stderr, "Insufficient memory");
        exit(EXIT_FAILURE);
    } else {
        // do something with pi
        // free
        free(pi);
    }

    return 0;
}