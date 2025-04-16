#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Elabore um programa para ler um conjunto de 10 elementos (números inteiros positivos) e verificar a quantidade de elementos menores que 10.
*/

int main(){
	srand(time(NULL));
	int i, flag = 0, vet[20];

	for(i = 0; i < 10; i++){
		vet[i] = rand() % 100;
	}
	
	for(i = 0; i < 10; i++){
		if(vet[i] < 10){
			flag += 1;
		}
	}
	
	printf("Possui %d valores menor que 10\n", flag);
	
	printf("\nAqui sao todos os valores:");
	for(i = 0; i < 8; i++){
		printf("%d ", vet[i]);
	}
	
	printf("\n");
	
	return 0;
}