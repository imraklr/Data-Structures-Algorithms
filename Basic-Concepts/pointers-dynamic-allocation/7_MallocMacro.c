#include <stdio.h>
#include <stdlib.h>

#define MALLOC(p, s) \
    if(!((p) = malloc(s))) { \
        fprintf(stderr, "Insufficient memory"); \
        exit(EXIT_FAILURE); \
    }

#define COMPARISON(p, s, y) ((p == s && s == y) ? -1 : 0)

int main() {
    int result = COMPARISON(1, 2, 3);
    printf("%d\n", result);

    return 0;
}
