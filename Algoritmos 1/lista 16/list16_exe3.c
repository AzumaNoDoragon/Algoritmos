#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que pe�a 5 n�meros reais. Depois, o programa deve apresentar o n�mero maior.
*/

int main(){
	int i, var[5], maior = 0;
	
	for(i = 0; i < 5; i++){
		printf("Digite um valor real: ");
		scanf("%d", &var[i]);
	}
	
	for(i = 0; i < 5; i++){
		if(var[i] > maior)
			maior = var[i];
	}
	
	printf("O maior valor entre eles �: %d", maior);
	
	return 0;
}