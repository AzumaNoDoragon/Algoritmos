#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que pe�a 6 valores inteiros, mas o primeiro valor deve ser colocado 
na �ltima posi��o do vetor, o segundo valor deve ser colocado na pen�ltima posi��o e assim por diante.
*/

int main(){
	int i, var[6];
	
	for(i = 6; i > 0; i--){
		printf("Digite um valor inteiro: ");
		scanf("%d", &var[i - 1]);
	}
	
	printf("Os Valores digitados foram: ");
	for(i = 0; i < 6; i++){
		printf("%d ", var[i]);
	}
	
	return 0;
}