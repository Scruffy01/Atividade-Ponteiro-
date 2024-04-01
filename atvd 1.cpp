#include<stdio.h>

void compararEnderecos(int *ptr1, int *ptr2) {

    if (*ptr1 > *ptr2) {
        printf("Conteudo do maior endereco: %d", *ptr1);}
    else if (*ptr2 > *ptr1) {
        printf("Conteudo do maior endereco: %d", *ptr2);}
}

int main() {
    int var1, var2;

     printf("Digite o valor da primeira variavel: ");
     scanf("%d", &var1);
     printf("Digite o valor da segunda variavel: ");
     scanf("%d", &var2);

    int *ptr1 = &var1;
    int *ptr2 = &var2;

    compararEnderecos(ptr1, ptr2);

    return 0;
}
