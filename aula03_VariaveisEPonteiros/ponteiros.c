#include <stdio.h>

int main() {
    
    int valor = 10;
    int *pvalor = &valor;
    
    printf("%d\n", valor); // Imprime 10...
    printf("%d\n", *pvalor); // Imprime 10...
    printf("%x\n", &valor); // Imprime um endereço incompleto...
    printf("%p\n", pvalor); // Imprime um endereço completo...
    
    return 0;
}
