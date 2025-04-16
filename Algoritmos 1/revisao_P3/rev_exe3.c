#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Elabore um algoritmo para preencher dois vetores de números inteiros aleatórios, 
cada vetor deve ter 10 posições. 
	a) Crie uma matriz 10X2 para armazenar os dois vetores; 
	b) Crie um terceiro vetor onde cada valor é a soma dos valores contidos nas respectivas posições dos vetores originais; 
	c) Imprima a matriz resultante. 
*/

int main(){
	srand(time(NULL));
	int i, j, vet1[10], vet2[10], mat[10][2], soma[10];
	
	for(i = 0; i < 10; i++){
		vet1[i] = rand() % 100;
		vet2[i] = rand() % 100;
	}
	
	for(i = 0; i < 10; i++){
		mat[i][0] = vet1[i];
		mat[i][1] = vet2[i];
	}
	
	for(i = 0; i < 10; i++){
		soma[i] = vet1[i] + vet2[i];
	}
	
	printf("\nVetores:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", vet1[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("%d ", vet2[i]);
	}
	printf("\n");
	
	printf("\nA matriz com os dois vetores:\n");
	for(i = 0; i < 10; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nO vetor com as somas:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", soma[i]);
	}
	
	return 0;
}