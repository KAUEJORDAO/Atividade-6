#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int* ponteiro;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    ponteiro = (int*) malloc(sizeof(int)); 
    *ponteiro = numero;  

    printf("Formato apos a atribuicao: %p\n", (void*)ponteiro);

    free(ponteiro); 
    return 0;
}

