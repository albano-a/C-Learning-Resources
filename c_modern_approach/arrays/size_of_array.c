/* Using the sizeof operator with arrays */
#include <stdio.h>

#define SIZE ((int) (sizeof(a) / sizeof(a[0])))

int main(int argc, char const *argv[])
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d bytes\n", sizeof(a));
    printf("%d elements\n", sizeof(a) / sizeof(a[0]));

    return 0;
}
