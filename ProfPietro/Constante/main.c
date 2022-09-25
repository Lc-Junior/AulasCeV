#include <stdio.h>
#include <stdlib.h>
#define texto "Entrada e saida de dados."
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	printf("\nDigite a altura: ");
	scanf("%f", &altura);
	
	printf("\nDigite o nome: ");
	scanf("%s", nome);
	
	printf("\nDados informados: ");
	printf("\nIdade: %d.", idade);
	printf("\nAltura: %.2f.", altura);
	printf("\nNome: %s", nome);
	return 0;
}
