#include <stdio.h>
#include <stdlib.h>

struct PowerSet {
    char* set; // size of array will be decided by the depth
    int size;  // depends on depth

    struct PowerSet *nextSet;
};

void printPowerSet(struct PowerSet *powerSet);

void createPowerSet(int index, int depth, int size, char* set, struct PowerSet **powerSet);

void freeAll(struct PowerSet *powerSet);

int main() {

    char set[] = {'a', 'b', 'c', 'd'};
    int size = sizeof(set) / sizeof(set[0]);

    struct PowerSet *powerSet = (struct PowerSet*)malloc(sizeof(struct PowerSet));
    powerSet->set = NULL;
    powerSet->size = 0;
    powerSet->nextSet = NULL;

    struct PowerSet *powerSetTail = powerSet;

    createPowerSet(0, 0, size, set, &powerSetTail);

    // display the power set
    printPowerSet(powerSet);

    freeAll(powerSet);

    return 0;
}

void createPowerSet(int index, int depth, int size, char* set, struct PowerSet **powerSet) {
    for(int i = index; i < size; i++) {
        struct PowerSet *nextSet = (struct PowerSet*)malloc(sizeof(struct PowerSet));
        nextSet->nextSet = NULL;
        nextSet->set = (char*)malloc(sizeof(char) * (depth + 1));
        nextSet->size = depth + 1;

        (*powerSet)->nextSet = nextSet;

        // copy the old data upto old depth
        for(int i = 0;i < ((*powerSet)->size);i++) {
            nextSet->set[i] = (*powerSet)->set[i];
        }
        (*powerSet)->nextSet = nextSet;
        *powerSet = nextSet;
        nextSet->set[depth] = set[i];
        
        createPowerSet(i+1, depth+1, size, set, powerSet);
    }
}

void printPowerSet(struct PowerSet *powerSet) {
    struct PowerSet *headPowerSet = powerSet;
    int i, printedLength;
    while(headPowerSet != NULL) {
        printf("{");
        i = printedLength = 0;
        while(i < (headPowerSet->size)) {
            printedLength = printf("%c, ", headPowerSet->set[i]);
            ++i;
        }
        if(printedLength) {
            printf("\b\b \b}, ");
        } else {
            printf("}, ");
        }
        headPowerSet = headPowerSet->nextSet;
    }
    if(printedLength) {
        printf("\b\b \b\n");
    }
}

void freeAll(struct PowerSet *powerSet) {
    while(powerSet != NULL) {
        // Hold a pointer to next powerSet set
        struct PowerSet *curr = powerSet->nextSet;

        // free this one's struct member resources
        
        // Check if the set is NULL
        if(powerSet->set != NULL) {
            // free the set
            free(powerSet->set);
        }
        // free this powerSet
        free(powerSet);

        // set the powerSet as curr
        powerSet = curr;
    }
}