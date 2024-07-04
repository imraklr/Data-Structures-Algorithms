#include <stdio.h>

int main() {

    int x = 3, y = 4, z = -1;

    if(
        (x < y) && (x < z)
        ) {
            printf("%d, ", x);
            if(
                (y < z)
            ) {
                printf("%d, %d", y, z);
            } else {
                printf("%d, %d", z, y);
            }
    } else if(
        (y < x) && (y < z)
    ) {
        printf("%d, ", y);
        if(
            (x < z)
        ) {
            printf("%d, %d", x, z);
        } else {
            printf("%d, %d", z, x);
        }
    } else if(
        (z < x) && (z < y)
    ) {
        printf("%d, ", z);
        if(
            (x < y)
        ) {
            printf("%d, %d", x, y);
        } else {
            printf("%d, %d", y, x);
        }
    }

    return 0;
}