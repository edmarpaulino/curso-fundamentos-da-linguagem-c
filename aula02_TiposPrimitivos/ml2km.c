#include <stdio.h>
#include <stdlib.h>

#define KILOMETRE 1.60934

int main(int argc, char *argv[]) {

        float ml = atof(argv[1]);
        float km = ml * KILOMETRE;

        printf("%.2f milhas = %.2fkm\n", ml, km);

        return 0;
}
