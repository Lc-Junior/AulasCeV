#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i, j;
	
	printf("Imprimindo a primeira linha:\n");
	for(j=0; j<3; j++){
		printf("%d", mat[0][j]);
	}
	
	printf("\n\nImprimindo a matriz toda:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		printf("%d ", mat[i][j]);
	}
	printf("\n");
}
	return 0;
}
