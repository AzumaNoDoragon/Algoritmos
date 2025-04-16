#include <stdio.h>
#include <locale.h>

/*
Crie uma matriz de 3x2, de números inteiros. Populacione-a usando laço 
para e, por fim, apresente todos os valores, mas de forma invertida. Por exemplo, 
se: 3 7 1 8 4 1 Então, deve-se apresentar a seguinte ordem na tela. 3 1 4 7 8 1 
*/

int main(){
	int i, j, count = 1, mat[3][2];
	
	printf("Preencha a matriz: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("valor %d: ", count);
			scanf("%d", &mat[i][j]);
			count++;
		}
	}
	
	printf("\nMatriz 3x2\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz 2x3\n");
	for(j = 0; j < 2; j++){
		for(i = 0; i < 3; i++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}