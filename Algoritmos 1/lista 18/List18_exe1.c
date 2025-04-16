#include <stdio.h>
#include <locale.h>

/*
Crie uma matriz de 2x2, de números inteiros. Populacione-a usando laço 
PARA e, por fim, apresente todos os valores na tela. 
*/

int main(){
	int i, j, count = 1, mat[2][2];
	
	printf("Preencha a matriz: \n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("valor %d: ", count);
			scanf("%d", &mat[i][j]);
			count++;
		}
	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}