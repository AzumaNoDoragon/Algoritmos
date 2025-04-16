#include <stdio.h>
#include <locale.h>

/*
Crie um algoritmo que peça um número inteiro e diga se é par ou 
ímpar.
*/

int count = 1;

int num(){
	int n;
	
	printf("Digite o %dº número inteiro: ", count);
	scanf("%d", &n);
	
	count++;
	
	return n;
}

int compare(int n1){
	return n1 % 2;
}

void show(int result){
	if(result == 0){
		printf("\nO número digitado é par!\n");
	} else {
		printf("\nO número digitado é impar!\n");
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