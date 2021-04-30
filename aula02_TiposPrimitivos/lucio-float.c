#include <stdio.h>

int main(void) {
	
	printf(
        "Sem limite de casas definido:\n"
		"3 * 4.6 em float %f\n"
        "3 * 4.6 em double %f\n"
		"3 * 4.6 em long double %Lf\n"
        "\n\n",
		3.0f * 4.6f,
        3.0 * 4.6,
		3.0l * 4.6l
		);
    
    printf(
        "Com limite máximo de casa para precisão:\n"
		"3 * 4.6 em float %.6f\n"
        "3 * 4.6 em double %.15f\n"
		"3 * 4.6 em long double %.18Lf\n"
        "\n\n",
		3.0f * 4.6f,
        3.0 * 4.6,
		3.0l * 4.6l
		);
    
    printf(
        "Uma casa antes do limite máximo de casas para precisão:\n"
		"3 * 4.6 em float %.5f\n"
        "3 * 4.6 em double %.14f\n"
		"3 * 4.6 em long double %.17Lf\n"
        "\n\n",
		3.0f * 4.6f,
        3.0 * 4.6,
		3.0l * 4.6l
		);


	return 0;
}
