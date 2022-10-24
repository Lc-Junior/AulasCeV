#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Criando e inicializando
	
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf("Início:\n");
	printf("pes.idade: %d\n",pes.idade);
	printf("pes.peso: %.2f\n",pes.peso);
	printf("pes.nome: %s\n",pes.nome);
	
	//Atribuindo valores aos campos
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Texto");
	
	printf("\nAlterando os campos via código:\n");
	printf("pes.idade: %d\n",pes.idade);
	printf("pes.peso: %.2f\n",pes.peso);
	printf("pes.nome: %s\n",pes.nome);
	
	//Solicitanto inserções via teclado
	
	printf("\nInsira um número inteiro:\n");
	scanf("%d", &pes.idade);
	printf("\nInsira um número real:\n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("\nInsira uma palavra:\n");
	scanf("%s", &pes.nome);
	
	printf("\nAlterando com dados do usuário:\n");
	printf("pes.idade: %d\n",pes.idade);
	printf("pes.peso: %.2f\n",pes.peso);
	printf("pes.nome: %s\n",pes.nome);
	return 0;
}
