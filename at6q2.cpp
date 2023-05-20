#include <stdio.h>

void alterarValor(int* ptr) {
    *ptr += 10;
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Valor antes da chamada da funcao: %d\n", numero);

    alterarValor(&numero);

    printf("Valor apos a chamada da funcao: %d\n", numero);

    return 0;
}

