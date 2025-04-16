#include <stdio.h>
#include <locale.h>

/*
Elabore um algoritmo que leia um vetor de 10 posições de números inteiros. 
	a) Garanta que o vetor não tenha números repetidos; 
	b) Apresente o vetor original; 
	c) Apresente a quantidade de valores ímpares encontrados no vetor. 
	d) Apresente os valores que estão nas posições pares. 
*/

int main(){
	int i, j, aux, flag, count = 1, vet[10];
	
	printf("Digite os valores do vetor:\n");
	for(i = 0; i < 10; i++){
		do{
			flag = 0;
			printf("Valor %d: ", count);
			scanf("%d", &aux);
			
			for(j = 0; j < i; j++){
				if(aux == vet[j]){
					flag += 1;
				}
			} 	
		}while(flag != 0);
		
		count += 1;
		vet[i] = aux;
	}
	
	printf("\nVetor original:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", vet[i]);
	}
	
	count = 0;
	printf("\n\nValores impares do vetor:\n");
	for(i = 0; i < 10; i++){
		if(vet[i] % 2 != 0){
			count += 1;
			printf("%d ", vet[i]);
		}
	}
	printf("\nTem se %d valores impares.\n", count);
	
	printf("\nValores nos indices pares do vetor:\n");
	for(i = 0; i < 10; i += 2){
		printf("%d ", vet[i]);
	}
	
	printf("\n");
	
	return 0;
}