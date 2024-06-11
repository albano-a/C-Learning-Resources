#include <stdio.h>
#include <stdbool.h>


int main() {

    int flag = true;
    int a = flag == true ? 2 : 3;
    int n = 0;
    while (flag == true) {
        n += 1;
        printf("%d\n", n);
        if (n == 10) {
            flag = false;
        }
    }

    return 0;
}
