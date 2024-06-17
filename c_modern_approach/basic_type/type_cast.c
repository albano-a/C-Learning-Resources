#include <stdio.h>

typedef float Dollars;

int main(int argc, char const *argv[])
{
    Dollars f = 3.2f, frac_part;

    frac_part = f - (int) f;


    printf("%f", frac_part);

    return 0;
}
