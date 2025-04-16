#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Elabore um programa para preencher um conjunto de 20 elementos (n�meros inteiros positivos) 
com n�meros aleat�rios, identificar o maior elemento e a sua respectiva posi��o no conjunto.
*/

int main(){
	srand(time(NULL));
	int i, maior, flag = 0, vet[20];
	
	for(i = 0; i < 20; i++){
		vet[i] = rand() % 1000;
	}
	
	maior = vet[0];
	
	for(i = 1; i < 20; i++){
		if(vet[i] > maior){
			flag = i;
			maior = vet[i];
		}
	}
	
	printf("O maior valor do vetor e %d e esta no indice %d\n", maior, flag);

	return 0;
}