#include <stdio.h>

int main(void) {
    
    char c[] = {'A', 'B', 'C'};     // Array de caracteres
    char s[] = {'D', 'E', 'F', '\0'};       // String
    
    printf(
        "Array de caracteres:   %s (%ld bytes)\n"
        "String             :   %s (%ld bytes)\n\n",
        c, sizeof(c), s, sizeof(s)
    );
    
    // Toda string é uma array de caracteres
    // MAS
    // Nem toda array de caracteres é uma string
    // A diferença está no caractere nulo '\0'
    
    return 0;
}
