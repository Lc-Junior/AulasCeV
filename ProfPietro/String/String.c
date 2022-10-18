#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char s[10];
	
	printf("Digite algo(scanf convencional): ");
	scanf("%s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	printf("Digite algo(scanf aprimorado): ");
	scanf("%9[^\n]s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	puts(s);
	fflush(stdin);
	return 0;
}
