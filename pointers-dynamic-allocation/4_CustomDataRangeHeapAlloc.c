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

    printf("%d\n", sizeof(*value)); // 2197152

    printf("%p\n", value);
    printf("%p\n", &value);
    printf("%p\n", &(*value));

    free(value);

    return 0;
}