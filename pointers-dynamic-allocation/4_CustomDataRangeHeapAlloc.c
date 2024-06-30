#include <stdio.h>
#include <stdlib.h>

// 2 MB
struct CustomDataType {
    long long int twoMegaByte[
        (2 * 1024 * 1024) / 8
    ]
};

int main() {

    struct CustomDataType* value = (struct CustomDataType*)malloc(sizeof(struct CustomDataType));

    char *byte_ptr = (char *)&value;
    byte_ptr += 5; // move to the 6th byte (0-based index)

    printf("%d", sizeof(*value));

    free(value);

    return 0;
}