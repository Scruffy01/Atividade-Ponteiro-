#include <stdio.h>

int main() {
    float elemento[10];
    float *ptr;

    ptr = elemento;
    for (int i = 0; i < 10; i++) {
        printf("Endereço [%d]: %p\n", i, ptr);
        ptr++;
    }
return 0;
}
