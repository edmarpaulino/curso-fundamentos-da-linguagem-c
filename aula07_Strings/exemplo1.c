#include <stdio.h>

int main(void) {
    
    char c = 'A';   // Variável do tipo 'char'
    char *pc = &c;  // Ponteiro do tipo base 'char'
    
    printf(
        "Valor em 'pc': %p\n"   // Sem indireção -> Aponta para o endereço
        "Valor em '*pc': %c\n\n",   // Com indireção -> Aponta para o valor do endereço
        pc, *pc
    );
    
    return 0;
}
