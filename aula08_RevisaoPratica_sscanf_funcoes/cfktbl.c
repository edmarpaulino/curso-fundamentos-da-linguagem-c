#include <stdio.h>
#include <stdlib.h>

// C = (F - 32) / 1.8
// F = (C * 1.8) + 32
// K = C + 273.15

/* 
Prótotipos das funções:
*/
float ctf_conv(float);			// Converte ºC -> ºF
float ctk_conv(float);			// Converte ºC -> K
float ftc_conv(float);			// Converte ºF -> ºC
void cfk_table(int, int, int);	// Tabela ºC -> ºF -> K
void fck_table(int, int, int);	// Tabela ºF -> ºC -> K
void usage(char *);				//	Erro e ajuda

/* 
Exibe erro e ajuda se nada for passado como argumento
*/
void usage(char *program){
	puts("parameters missing!\n\nUsage:");
	printf("%s c|f <min> <max> <step>\n", program);
	exit(1);
}

/*
Converte ºC -> ºF
*/
float ctf_conv(float celsius) {
	return (celsius * 1.8) + 32;
}

/*
Converte ºC -> K
*/
float ctk_conv(float celsius) {
	return celsius + 273.15;
}

/*
Converte ºF -> ºC
*/
float ftc_conv(float fahrenheit) {
	return (fahrenheit - 32) / 1.8;
}

/*
Imprime tabela ºC -> ºF -> K
*/
void cfk_table(int min, int max, int step) {
	printf("\n(ºC)	(ºF)	(K)\n");
	while (min <= max) {
		printf("%4d	%6.2f	%6.2f\n", min, ctf_conv(min), ctk_conv(min));
		min += step;
	}
	puts("");
}

/*
Imprime tabela ºF -> ºC -> K
*/
void fck_table(int min, int max, int step) {
	float c;
	printf("\n(ºF)	(ºC)	(K)\n");
	while (min <= max) {
		c = ftc_conv(min);
		printf("%4d	%6.2f	%6.2f\n", min, c, ctk_conv(c));
		min += step;
	}
	puts("");
}

/*
Main
*/
int main(int argc, char *argv[]) {
	
	int min, max, step;

	// Se houver menos parâmetros do que o esperado, sai e mostra a ajuda:
	if (argc < 5) usage(argv[0]);

	// sscanf(string, formato, &var)
	sscanf(argv[2], "%d", &min);
	sscanf(argv[3], "%d", &max);
	sscanf(argv[4], "%d", &step);

	// Tabela ºC -> ºF -> K
	if (*argv[1] == 'c') cfk_table(min, max, step);

	// Tabela ºF -> ºC -> K
	if (*argv[1] == 'f') fck_table(min, max, step);

	return 0;
}
