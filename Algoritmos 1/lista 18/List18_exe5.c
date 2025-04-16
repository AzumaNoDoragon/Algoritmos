#include <stdio.h>
#include <locale.h>

/*
Crie três matrizes de 3x3 de inteiros: mat1, mat2 e mult. Em seguida, peça 
para o usuário digitar os valores para mat1 e mat2. Em seguida, o algoritmo deverá 
preencher a matriz mult com a multiplicação das respectivas posições das matrizes 
mat1 e mat2.
*/

int main(){
	int i, j, count = 1, mat1[3][3], mat2[3][3], mult[3][3];
	
	printf("Preencha a matriz 1: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("valor %d: ", count);
			scanf("%d", &mat1[i][j]);
			count++;
		}
	}
	
	count = 1;
	printf("Preencha a matriz 2: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("valor %d: ", count);
			scanf("%d", &mat2[i][j]);
			count++;
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			mult[i][j] = mat1[i][j] * mat2[i][j];
		}
	}
	
	printf("\nAqui estao as duas matrizes e sua resultante multiplicada: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", mat1[i][j]);
		}
		printf("  *   ");
		for(j = 0; j < 3; j++){
			printf("%d ", mat2[i][j]);
		}
		printf("  =  ");
		for(j = 0; j < 3; j++){
			printf("%d ", mult[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}