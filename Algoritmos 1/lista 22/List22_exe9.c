#include <stdio.h>
#include <locale.h>

/*
Crie um algoritmo que pe�a um n�mero inteiro e diga se � par ou 
�mpar.
mas d�! Vamos repetir os exerc�cios 7 e 8, mas desta vez, 
crie uma fun��o para receber os dados de entrada, uma outra fun��o para 
decidir se � par ou �mpar (no caso do exerc�cio 7) ou qual o maior (no caso 
do exerc�cio 8) e uma fun��o para apresentar o resultado. 
*/

int count = 1;

int num(){
	int n;
	
	printf("Digite o %d� n�mero inteiro: ", count);
	scanf("%d", &n);
	
	count++;
	
	return n;
}

int compare(int n1){
	return n1 % 2;
}

void show(int result){
	if(result == 0){
		printf("\nO n�mero digitado � par!\n");
	} else {
		printf("\nO n�mero digitado � impar!\n");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, result;
	
	n1 = num();
	result = compare(n1);
	show(result);
	
	return 0;
}