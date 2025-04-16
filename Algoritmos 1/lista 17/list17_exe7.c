#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Preencher um vetor de dimens�o 10 com n�meros inteiros n�o repetidos; solicitar 
um n�mero do teclado; pesquisar se esse n�mero existe no vetor. Se existir, imprimir
em qual posi��o do vetor. Se n�o existir, informar que "O numero n�o foi encontrado no vetor".
*/

int main(){
	srand(time(NULL));
	int i, j, aux, num, flag = -1, vet[10];
	
	for(i = 0; i < 10; i++){
        aux = rand() % 100;
        int repetido = 0;
        for(j = 0; j < i; j++) {
            if(vet[j] == aux) {
                repetido = 1;
            }
        }
        if(repetido == 0) {
            vet[i] = aux;
        } else {
            i--;
        }
    }
	
	printf("Digite um valor de 0 a 99 para adivinhar algum numero do vetor\n");
	scanf("%d", &num);
	
	for(i = 0; i < 10; i++){
		if(vet[i] == num){
			flag = i;
		}
	}
	
	if(flag != -1){
		printf("\nO numero encontra-se no indice %d do vetor.\n", flag);
	} else {
		printf("\nO numero nao foi encontrado no vetor\n");
	}
	
	printf("\nAqui sao todos os valores:");
	for(i = 0; i < 10; i++){
		printf("%d ", vet[i]);
	}
	return 0;
}