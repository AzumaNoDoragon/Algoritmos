#include <stdio.h>
#include <locale.h>

/*
Solicite ao usuário que digite 8 números. A cada número que o usuário digita, mostre
na tela a posição do vetor que o número ocupará. Em seguida mostre na tela os números digitados pelo usuário.
*/

int main(){
	int i, var[8];
	
	for(i = 0; i < 8; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &var[i]);
		printf("O numero foi inserido no indice %d do vetor\n", i + 1);
	}
	
	printf("Os valores sao:");
	for(i = 0; i < 8; i++){
		printf("%d ", var[i]);
	}
	
	return 0;
}