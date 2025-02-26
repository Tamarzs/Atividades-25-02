#include "stdio.h"

int main() {
    float nota;
    
    printf("Digite a nota: ");
    scanf("%f", &nota);
    
    if (nota>=9) {
        printf("Conceito: A");
        return 0;
    }  
    if (nota>=8) {
        printf("Conceito: B");
        return 0;
    } 
    if (nota>=7) {
        printf("Conceito: C");
        return 0;
    } 
    if (nota>=6) {
        printf("Conceito: D");
        return 0;
    } 
    if (nota<6) {
        printf("Conceito: F");
        return 0;
    } return 0;
}