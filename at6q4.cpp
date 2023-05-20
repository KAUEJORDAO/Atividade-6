#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

typedef struct {
    Node* top;
} Pilha;

void inicializarPilha(Pilha* pilha) {
    pilha->top = NULL;
}

int estaVazia(Pilha* pilha) {
    return pilha->top == NULL;
}

void push(Pilha* pilha, int valor) {
    Node* novoNode = (Node*)malloc(sizeof(Node));
    novoNode->data = valor;
    novoNode->next = pilha->top;
    pilha->top = novoNode;
}

int pop(Pilha* pilha) {
    if (estaVazia(pilha)) {
        printf("Erro: pilha vazia.\n");
        return -1;
    }
    Node* temp = pilha->top;
    int valor = temp->data;
    pilha->top = temp->next;
    free(temp);
    return valor;
}

void exibirPilha(Pilha* pilha) {
    if (estaVazia(pilha)) {
        printf("Pilha vazia.\n");
        return;
    }
    printf("Valores na pilha: ");
    Node* temp = pilha->top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Pilha pilha;
    inicializarPilha(&pilha);

    int* ponteiro1 = (int*)malloc(sizeof(int));
    int* ponteiro2 = (int*)malloc(sizeof(int));

    printf("Digite o valor do ponteiro 1: ");
    scanf("%d", ponteiro1);
    printf("Digite o valor do ponteiro 2: ");
    scanf("%d", ponteiro2);

    push(&pilha, *ponteiro1);
    push(&pilha, *ponteiro2);

    exibirPilha(&pilha);

    free(ponteiro1);
    free(ponteiro2);

    return 0;
}

