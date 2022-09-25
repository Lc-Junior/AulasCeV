#include <stdio.h>
#include <stdlib.h>

int main() {
	float m;
	
	printf("Insira a nota:\n");
	scanf("%f", &m);
	
	if(m >= 4.0 && m <7.0){ //Menor ou igual a 4 "E" menor que 7
		printf("Tem direito a exame!\n");
	}
}
