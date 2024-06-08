#include <stdio.h>


int main() {

    double notas[] = {7.8, 1.6, 9.8};
    double sum = 0; // Use double for the sum...
    int length = sizeof(notas)/sizeof(notas[0]);
    for(int i = 0; i < length ; i++){
        sum += notas[i];
    }
    double media = sum / length ;

    printf("The final average is %.2f\n", media);

    return 0;
}