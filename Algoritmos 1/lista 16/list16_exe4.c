#include <stdio.h>
#include <locale.h>

/*
Faça um programa que peça 5 números reais. Depois, o programa deve apresentar o número menor.
*/

int main(){
	int i, var[5], menor = 10000;
	
	for(i = 0; i < 5; i++){
		printf("Digite um valor real: ");
		scanf("%d", &var[i]);
	}
	
	for(i = 0; i < 5; i++){
		if(var[i] < menor)
			menor = var[i];
	}
	
	printf("O maior valor entre eles e: %d", menor);
	
	return 0;
}