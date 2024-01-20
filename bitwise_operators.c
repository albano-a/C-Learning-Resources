#include <stdio.h>

int main()
{
    // BITWISE OPERATORS = special operators used in bit livel programming
    //                     (knowing binary is important for this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift

    int x = 6; // 6 = 00000110
    int y = 12;//12 = 00001100
    int z = 0; // 6 = 00000110

    z = x & y; // 00000100
    printf("AND = %d\n", z);

    z = x | y; // 0001110
    printf("OR = %d\n", z);

    z = x ^ y; // 0001010
    printf("XOR = %d\n", z);

    z = x << 2; // 00011000 - one position to the left
    printf("SHIFT LEFT = %d\n", z);

    z = x >> 1; // 00000110 - one position to the right
    printf("SHIFT RIGHT = %d\n", z);

    return 0;
}