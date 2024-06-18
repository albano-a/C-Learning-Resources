#include <stdio.h>

int main(){

    int integer;
    short shorter;
    long longer;
    float floater;
    double doubler;
    long double longdoubler;

    printf("%zu\n", sizeof(integer));
    printf("%zu\n", sizeof(shorter));
    printf("%zu\n", sizeof(longer));
    printf("%zu\n", sizeof(floater));
    printf("%zu\n", sizeof(doubler));
    printf("%zu\n", sizeof(longdoubler));

    return 0;
}