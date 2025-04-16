#include <stdio.h>
#include <locale.h>

/*
Crie uma matriz de 3x3, de números reais. Populacione-a usando laço 
PARA e, por fim, apresente todos os valores na tela, mas na forma de matriz. 
*/

int main(){
	int i, j, count = 1;
	float mat[3][3];
	
	printf("Preencha a matriz: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("valor %d: ", count);
			scanf("%f", &mat[i][j]);
			count++;
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%0.2f ", mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}