/*Escreva um programa para calcular e exibir o valor de uma prestação em atraso:
prestacao_atrasada <- prestacao + (prestacao*(taxa/100)*num_dias_atraso)
a) taxa é o percentual de juros por dia
b) num_dias_atraso é o número de dias em atraso
c) prestação é o valor da prestação normal.
O valor da prestação, a taxa e o número de dias em atraso devem ser fornecidos pelo usuário.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int d;
	float p, t, soma;
	
	printf("digite o valor da prestação: ");
	scanf("%f",&p);
	printf("digite o valor da taxa: ");	
	scanf("%f",&t);
	printf("Digite quantos dias em atraso: ");
	scanf("%d",&d);
	soma = p + (p * (t / 100) * d);
	printf("\nO valor da prestação em atraso é: %.2f\n",soma);
	
	return 0;
}