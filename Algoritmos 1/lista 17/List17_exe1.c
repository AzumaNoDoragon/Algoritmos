#include <stdio.h>
#include <locale.h>

/*
Solicite ao usu�rio que digite 8 n�meros. A cada n�mero que o usu�rio digita, mostre
na tela a posi��o do vetor que o n�mero ocupar�. Em seguida mostre na tela os n�meros digitados pelo usu�rio.
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