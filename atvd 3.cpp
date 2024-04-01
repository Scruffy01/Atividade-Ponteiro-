#include <iostream>

void separar(float num){
    printf("Parte Inteira : %d",(int) num);
    printf("\nParte Decimal : %.2f", num - ((int)num));
}

int main() {
    float num;
  printf("Introduza um numero com parte decimal: ");
  scanf("%f", &num);
  separar(num);

    return 0;
}
