#include <stdio.h>

int list[5];   // Integers
int* plist[5]; // Pointers to integers

int main() {

    // Insert into list of integers
    for(int i=0;i<5;i++) {
        list[i] = i+1;
        plist[i] = &list[i];
    }

    printf("[");
    // Display x2 them
    for(int i=0;i<5;i++) {
        printf("%d, ", (list[i]+*plist[i]));
    }

    printf("\b\b \b]\n");

    // try making change at list[3]
    list[3] = 33;   // changes will be reflected while accessing plist items

    // reprint
    printf("[");
    // Display x2 them
    for(int i=0;i<5;i++) {
        printf("%d, ", (list[i]+*plist[i]));
    }

    printf("\b\b \b]\n");

    return 0;
}