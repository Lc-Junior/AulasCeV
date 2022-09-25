#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int dado = 10;
	printf("Dado antes do incremento: %d", dado);
	
	dado++;
	printf("\nDepois do incremento: %d", dado);
	
	dado--;
	printf("\nDepois do decremento: %d", dado);
	
	dado+= 3;
	printf("\nDepois do incremento em 3 unidades: %d", dado);
	
	dado-= 2;
	printf("\nDepois do decremento em 2 unidades: %d", dado);
	
	dado*= 10;
	printf("\nDepois de multiplicar por 10: %d", dado);
}
