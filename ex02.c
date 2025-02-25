#include "stdio.h"

int main() {
    int x;
    int y;
    
    printf("Digite um número: ");
    scanf("%d", &x);
    
    printf("Digite outro número: ");
    scanf("%d", &y);
    
    if (x==y) {
        printf("iguais");
    } if (x>y) {
        printf("Maior: %d\nMenor: %d", x, y);
    } if (y>x) {
        printf("Maior: %d\nMenor: %d", y, x);
    }
    return 0;
}