/*Escreva um programa para calcular e exibir o valor de uma presta��o em atraso:
prestacao_atrasada <- prestacao + (prestacao*(taxa/100)*num_dias_atraso)
a) taxa � o percentual de juros por dia
b) num_dias_atraso � o n�mero de dias em atraso
c) presta��o � o valor da presta��o normal.
O valor da presta��o, a taxa e o n�mero de dias em atraso devem ser fornecidos pelo usu�rio.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int d;
	float p, t, soma;
	
	printf("digite o valor da presta��o: ");
	scanf("%f",&p);
	printf("digite o valor da taxa: ");	
	scanf("%f",&t);
	printf("Digite quantos dias em atraso: ");
	scanf("%d",&d);
	soma = p + (p * (t / 100) * d);
	printf("\nO valor da presta��o em atraso �: %.2f\n",soma);
	
	return 0;
}