#include <stdio.h>

int main(){

    int a[15] = {[2] = 29, [9] = 7, [14] = 48};
    int a[15] = {[14] = 48, [9] = 7, [2] = 29};
    // Each number in brackets is said to be a designator.
    int b[] = {[5] = 10, [23] = 13, [11] = 36, [15] = 29};
    int c[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};

    return 0;
}