#include <stdio.h>

void ler(int vetor[], int tamanho) {
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void verificar(int vetor[], int tamanho, int *min, int *max) {

    if (tamanho == 0) {
        printf("O vetor está vazio.\n");
        return;
    }

    *min = vetor[0];
    *max = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *min) {
            *min = vetor[i];
        }
        if (vetor[i] > *max) {
            *max = vetor[i];
        }
    }
}

int main() {
    int tamanho;
    int vetor[tamanho];
    int min, max;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    ler(vetor, tamanho);
    verificar(vetor, tamanho, &min, &max);

    printf("\nO menor elemento do vetor é: %d\n", min);
    printf("O maior elemento do vetor é: %d\n", max);

    return 0;
}
