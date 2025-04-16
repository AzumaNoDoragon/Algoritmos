#include <stdio.h>

/*
Crie um algoritmo que receba dois números e apresente o maior. 
Dica: lembre-se da seção EXEMPLO DE REUSABILIDADE. 
mas dá! Vamos repetir os exercícios 7 e 8, mas desta vez, 
crie uma função para receber os dados de entrada, uma outra função para 
decidir se é par ou ímpar (no caso do exercício 7) ou qual o maior (no caso 
do exercício 8) e uma função para apresentar o resultado. 
*/

int num(){
	int n;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	return n;
}

int compare(int n1, int n2){
	int i, vet[2] = {n1, n2}, maior = 0;
	
	for(i = 0; i < 2; i++){
		if(vet[i] > maior){
			maior = vet[i];
		}
	}
	
	return maior;	
}

void show(int maior){
	printf("\nO maior valor digitado foi: %d\n", maior);
}

int main(){
	int n1, n2, maior;
	
	n1 = num();
	n2 = num();
	maior = compare(n1, n2);
	show(maior);
	
	return 0;
}