#include <stdio.h>

/*
Crie um algoritmo que receba dois n�meros e apresente o maior. 
Dica: lembre-se da se��o EXEMPLO DE REUSABILIDADE. 
mas d�! Vamos repetir os exerc�cios 7 e 8, mas desta vez, 
crie uma fun��o para receber os dados de entrada, uma outra fun��o para 
decidir se � par ou �mpar (no caso do exerc�cio 7) ou qual o maior (no caso 
do exerc�cio 8) e uma fun��o para apresentar o resultado. 
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