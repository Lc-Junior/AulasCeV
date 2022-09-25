#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade = 0;
	float peso = 0.0;
	
	printf("Digite uma idade: \n");
	scanf("%d", &idade);
	
	printf("Digite um peso: \n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d anos.\n", idade);
	printf("Peso informado: %.1f kilos.\n", peso);
	return 0;
}
