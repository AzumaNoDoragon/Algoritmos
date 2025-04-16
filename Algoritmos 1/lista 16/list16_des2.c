#include <stdio.h>
#include <locale.h>

/*
Faça um programa que peça 5 números inteiros. Após digitados, o programa deve ordenar 
os valores no vetor e apresentá-los na tela em ordem crescente. 
*/

int main(){
	int i, j, aux, var[5];
	
	for(i = 0; i < 5; i++){
		printf("Digite um valor inteiro: ");
		scanf("%d", &var[i]);
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(var[j] > var[i]){
				aux = var[j];
				var[j] = var[i];
				var[i] = aux;
			}
		}
	}
	
	printf("Os valores em ordem crescente sao: ");
	for(i = 0; i < 5; i++){
		printf("%d ", var[i]);
	}
	
	return 0;
}