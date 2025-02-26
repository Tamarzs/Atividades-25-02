#include "stdio.h"

int main() {
    int x;
    
    printf("Digite um número: ");
    scanf("%d", &x);
    
    int divisao = x / 2;
    int resto = x % 2;
    
    if (resto==0) {
        printf("par");
    } if (resto>0) {
        printf("ímpar");
    }
    return 0;
}    