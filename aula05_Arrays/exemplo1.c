#include <stdio.h>

#define MAX 4

int main() {
    
    float valor[MAX] = {10.5, 9.8, 15.7, 13.25};
    
    for (int i = 0; i < MAX; i++) {
        printf(
            "Valor %d: R$ %5.2f - Índice %d\n",
            i + 1, valor[i], i
        );
    }
    
    valor[2] = 17.2;
    
    printf("\nNovo valor[2]: R$ %.2f\n", valor[2]);
    
    return 0;
}
