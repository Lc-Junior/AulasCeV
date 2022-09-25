#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int A, B, soma, subtr, mult, divis;
	
	printf("\nDigite o primeiro valor: ");
	scanf("%d", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("\nResultados:\n");
	printf("Soma %d.\n", soma);
	printf("Subtracao: %d.\n", subtr);
	printf("Multiplicação: %d.\n", mult);
	printf("Divisao: %d.\n", divis);
	return 0;
}
