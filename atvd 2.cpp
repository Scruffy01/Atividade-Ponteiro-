#include <stdio.h>

int main() {
    float elemento[10];
    float *ptr;

    ptr = elemento;
    for (int i = 0; i < 10; i++) {
        printf("Endere�o [%d]: %p\n", i, ptr);
        ptr++;
    }
return 0;
}
