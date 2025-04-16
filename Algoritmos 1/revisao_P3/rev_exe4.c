#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Elabore um algoritmo para preencher uma matriz 4x4 com valores inteiros aleatórios. 
	a) Conte e escreva quantos valores maiores que 10 ela possui; 
	b) Calcule e apresente a soma dos valores da diagonal principal da matriz; 
	c) Preencha com 1 a diagonal principal e com 0 os demais elementos, transformando-a em matriz identidade; 
	d) Escreva a matriz resultante.
*/

int main(){
	srand(time(NULL));
	int i, j, calc = 0, mat[4][4];
	
	for(i = 0; i < 4; i++){
		for(j = 0; i < 4; j++){
			mat[i][j] = rand() % 100;
		}
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(i == j){
				calc += mat[i][j];
			}
		}
	}
	printf("\nA soma da diagonal principal da matriz e: %d", calc);
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(i == j){
				mat[i][j] = 1;
			} else{
				mat[i][j] = 0;
			}
		}
	}
	
	printf("\n\nMatriz identidade:\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}