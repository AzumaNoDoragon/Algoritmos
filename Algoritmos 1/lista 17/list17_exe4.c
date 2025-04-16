#include <stdio.h>
#include <locale.h>

/*
Neste exercício temos dois vetores com 5 posições (0 a 4). Em cada vetor entraremos 
com cinco números. Mostrar os números e depois somar os números que pertençam a mesma posição ou seja: [0]+[0],[1]+[1],…
*/

int main(){
	int i, vet[5], var[5];
	
	for(i = 0; i <5; i++){
		vet[i] = (i * 2) + 3;
		var[i] = i + 5;
	}
	
	for(i = 0; i <5; i++){
		printf("No indice %d de cada vetor, tem-se os valores %d e %d\n", i, vet[i], var[i]);
	}
	
	for(i = 0; i <5; i++){
		vet[i] += var[i];
	}
	
	printf("\nAgora os vetores somados ficam, respectivamente: ");
	for(i = 0; i <5; i++){
		printf("%d ", vet[i]);
	}
	
	printf("\n");
	
	return 0;
}