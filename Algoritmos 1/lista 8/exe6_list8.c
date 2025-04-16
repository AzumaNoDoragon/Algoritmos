#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça três lados de um triângulo (pode ser apenas 
números inteiros). O programa deve apresentar se os lados apresentados 
formam ou não um triângulo. As mensagens devem ser: “é um 
triângulo” ou “não é um triângulo”. Para saber se é possível criar um 
triângulo, a regra é: cada lado precisa ser menor que a soma dos outros 
dois lados (do contrário, o triângulo não fecha).*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int a, b, c;
	
	printf("digite os lados do triângulo\n");
	printf("Lado A: ");
	scanf("%d", &a);
	printf("Lado B: ");
	scanf("%d", &b);
	printf("Lado C: ");
	scanf("%d", &c);
	
	if(a>0 && b>0 && c>0 && a < b + c && b < a + c && c < a + b)
		printf("\nÉ um triângulo!\n");
	else
		printf("\nNão é um triângulo!\n");
	   	
	return 0;
}