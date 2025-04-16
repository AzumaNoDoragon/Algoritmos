#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Preencher um vetor somente valores inteiros, positivos e ímpares para um vetor com dimensão 20 e:
a) Mostrar quantos números múltiplos de 5 existem no vetor, e quais são;
b) Mostrar somente os números que estão nas posições pares do vetor;
c) Mostrar o vetor original.

*/

int main(){
	srand(time(NULL));
	int i, aux, count = 0, vet[20], mult[20];
	
	for(i = 0; i < 20; i++){
		do{
			aux = rand() % 100;
		}while(aux % 2 == 0);
		vet[i] = aux;
	}
	
	for(i = 0; i < 20; i++){
		if(vet[i] % 5 == 0){
			mult[count] = vet[i];
			count++;
		}
	}
	
	if(count > 0){
		printf("O vetor possui %d multiplos de 5, sendo eles: ", count);
		for(i = 0; i < count; i++){
			printf("%d ", mult[i]);
		}  		
	} else{ 
		printf("\nNao possui nenhum multiplo de 5.");
	}

	printf("\n\nAqui estao os numeros das posicoes pares do vetor: ");
	for(i = 0; i < 20; i += 2){
		printf("%d ", vet[i]);
	}
	
	printf("\n\nAqui esta todo o vetor: ");
	for(i = 0; i < 20; i++){
		printf("%d ", vet[i]);
	}
	
	printf("\n");
	return 0;
}