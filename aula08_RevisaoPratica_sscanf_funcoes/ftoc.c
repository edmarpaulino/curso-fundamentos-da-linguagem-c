#include <stdio.h>
#include <stdlib.h>

/* F = (C * 1.8) + 32 */

int main(int argc, char **argv) {
    
    float fahrenheit;
    
    sscanf(argv[1], "%f", &fahrenheit);
    
    printf("%.2f ºF = %.2f ºC\n", fahrenheit, (fahrenheit - 32) / 1.8);
    
    return 0;
}
