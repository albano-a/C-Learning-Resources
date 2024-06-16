#include <stdio.h>

int main(){
    char nome[11];

    // Dangerous because of vuffer overflow
    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("%s", nome);
}