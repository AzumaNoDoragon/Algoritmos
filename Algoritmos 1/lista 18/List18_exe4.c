#include <stdio.h>
#include <locale.h>

/*
Crie uma matriz de 2x3, de números inteiros e a populacione usando laço 
para. Por fim, calcule e apresente a soma de cada linha. Por exemplo, se o usuário 
digitar: 3 1 4 7 8 1 e a matriz for semelhante à última do exercício anterior, então, o 
algoritmo deverá apresentar respectivamente: 8 e 16 
*/

int main(){
	int i, j, count = 1, calc[2] = {0, 0}, mat[2][3];
	
	printf("Preencha a matriz: \n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("valor %d: ", count);
			scanf("%d", &mat[i][j]);
			count++;
		}
	}
	
	for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            calc[i] += mat[i][j];
        }
    }
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", mat[i][j]);
		}
		printf(" = %d\n", calc[i]);
	}
	
	return 0;
}