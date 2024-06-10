#include <stdio.h>

int main() {
    int b;
    int a = 5;
    int c = (b = a + 2) - (a = 1);
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
