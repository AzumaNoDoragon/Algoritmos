#include <stdio.h>
#include <locale.h>

/*
Elabore um algoritmo para ler uma matriz 3 x 3 com números inteiros positivos. 
	a) Escreva a matriz original; 
	b) Percorra a matriz e retorne à localização (a linha e a coluna) do menor valor encontrado. Deve-se atribuir ao menor valor, o primeiro valor válido do vetor. 
	c) Apresente a soma dos valores de cada linha da matriz;
*/

int main(){
	int i, j, aux, count = 1, flag[2], menor = 1000, mat[3][3];
	
	printf("Digite ps valores da matriz:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Valor %d: ", count);
			scanf("%d", &mat[i][j]);
			count++;
		}
	}
	aux = mat[0][0];
	
	 for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (mat[i][j] < menor) {
                flag[0] = i;
                flag[1] = j;
                menor = mat[i][j];
            }
        }
    }
    
	mat[flag[0]][flag[1]] = aux;
	
	printf("\nA matriz após a substituição:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
	
	printf("\nA soma das linhas da matriz é:\n");
    for (i = 0; i < 3; i++) {
        int soma = 0;
        for (j = 0; j < 3; j++) {
            soma += mat[i][j];
        }
        printf("Linha %d: %d\n", i + 1, soma);
    }

	return 0;
}