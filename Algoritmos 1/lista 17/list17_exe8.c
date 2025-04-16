#include <stdio.h>
#include <locale.h>

/*
Preencher um vetor com  100 elementos inteiros, colocando 1 na posição correspondente a um número par e 0 a um número ímpar.
*/

int main(){
	int i, vet[100];
	
	for(i = 0; i < 100; i++){
		if(i % 2 == 0){
			vet[i] = 1;
		} else {
			vet[i] = 0;
		}
	}
	
	for(i = 0; i < 100; i++){
		printf(" %d ", vet[i]);	
	}
	
	return 0;
}