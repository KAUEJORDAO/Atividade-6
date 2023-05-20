#include <stdio.h>

void trocarValor(int *ponteiro, int novoValor) {
    *ponteiro = novoValor;
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int *ponteiro = &numero;

    printf("Valor antes da troca:\n");
    printf("Nmero: %d\n", numero);
    printf("Ponteiro: %d\n", *ponteiro);

    int novoValor;
    printf("\nDigite um novo valor inteiro: ");
    scanf("%d", &novoValor);

    trocarValor(ponteiro, novoValor);

    printf("\nValor apos a troca:\n");
    printf("Número: %d\n", numero);
    printf("Ponteiro: %d\n", *ponteiro);

    return 0;
}

