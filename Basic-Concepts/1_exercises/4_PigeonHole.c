#include <stdio.h>
#include <stdlib.h>

// Example function f, mapping 1 to n inputs to outputs in range [1, n-1]
int f(int x) {
    return x % 5; // Example function where f(x) outputs x mod 5
}

void findDuplicates(int n) {
    int *pOutputMap = (int*)malloc(sizeof(int) * (n+1)); // Assuming f outputs are in range [1, n]
    
    for (int i = 1; i <= n; ++i) {
        pOutputMap[i] = -1; // Initialize output map with -1 (indicating not seen)
    }
    
    for (int i = 1; i <= n; ++i) {
        int output = f(i); // Assuming f is a function defined elsewhere
        
        if (pOutputMap[output] != -1) {
            printf("Found a and b such that f(a) = f(b):\n");
            printf("a = %d, b = %d\n", pOutputMap[output], i);
            return;
        } else {
            pOutputMap[output] = i; // Store current input index for this output
        }
    }


    free(pOutputMap);
    
    printf("No duplicates found within given constraints.\n");
}

int main() {
    int n = 10; // Example number of distinct inputs
    
    findDuplicates(n);
    
    return 0;
}
