#include <stdio.h>
#include <stdlib.h>

typedef enum {
    true, false
} boolean;

void printCombos(int depth, boolean* pStates, boolean currState, int size);
void printCombosV2(int depth, boolean* pStates, int size);
void booleanToString(boolean);

int main() {

    int n = 3;

    boolean* pStates = (boolean*)malloc(sizeof(boolean) * n);

    printCombos(n-1, pStates, true, n);
    printCombos(n-1, pStates, false, n);

    free(pStates);

    return 0;
}

void printCombos(int depth, boolean* pStates, boolean currState, int size) {
    if(depth == -1) {
        for(int i=0;i<size;i++) {
            booleanToString(pStates[i]);
        }
        printf("\n");
        return;
    } else {
        pStates[size-depth-1] = currState;
        printCombos(depth - 1, pStates, true, size);
        if(depth != 0)
            printCombos(depth - 1, pStates, false, size);
    }
}

// another version (fast)
void printCombosV2(int depth, boolean* pStates, int size) {
    if (depth == 0) {
        for (int i = 0; i < size; i++) {
            booleanToString(pStates[i]);
        }
        printf("\n");
        return;
    }

    pStates[size - depth] = true;
    printCombosV2(depth - 1, pStates, size);

    pStates[size - depth] = false;
    printCombosV2(depth - 1, pStates, size);
}

void booleanToString(boolean value) {
    switch (value)
    {
    case true:
        printf("T\t");
        break;
    case false:
        printf("F\t");
        break;
    }
}