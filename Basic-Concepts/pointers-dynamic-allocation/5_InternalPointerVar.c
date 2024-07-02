#include <stdio.h>
#include <stdlib.h>

struct Something {
    int v1;
    int v2;
};

int main() {

    struct Something s;
    s.v1 = 1;
    s.v2 = 23;

    printf("s = %p\n", s);
    // printf("s = %llu\n", *s); // * applies on pointer type only
    printf("&s = %p\n", &s);

    printf("*&s = %p\n", *(&s));



    struct Something* a = malloc(sizeof(struct Something));

    // To access a member, dot(.) operator is used. This is may be the syntactic sugar 
    // by C language. I don't know what is the Behind The Scenes :)
    // May be I am correct/wrong. To those who are reading this comment, please clarify
    // it by providing your views or some reference for definitions/examples.
    (*a).v1 = 23;
    (*a).v2 = 32;

    printf("%d\n", a->v1);
    printf("%d\n", a->v2);

    free(a);

    return 0;
}