#include <stdio.h>

int main(int argc, char const *argv[])
{
    float f = 3.2f, frac_part;

    frac_part = f - (int) f;

    printf("%f", frac_part);

    return 0;
}
