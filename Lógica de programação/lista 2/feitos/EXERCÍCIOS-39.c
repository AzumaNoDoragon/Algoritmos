/*Escreva um programa que receba o sal�rio atual de um funcion�rio e, usando a tabela a seguir, calcule
e mostre o valor do aumento e o novo sal�rio.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float s1, soma, soma2;
	
	printf("Digite seu sal�rio para saber o aumento\n");
	scanf("%f",&s1);
	
	if (s1 <= 300){
		soma = s1 * 0.15;
		soma2 = s1 + soma;
		printf("\nO aumento ser� de %.2f, sendo assim, seu novo sal�rio ser� %.2f\n",soma,soma2);
		}
	if ((s1 > 300) && (s1 <= 600)){
		soma = s1 * 0.10;
		soma2 = s1 + soma;
		printf("\nO aumento ser� de %.2f, sendo assim, seu novo sal�rio ser� %.2f\n",soma,soma2);
		}
	if ((s1 > 600) && (s1 <= 900)){
		soma = s1 * 0.05;
		soma2 = s1 + soma;
		printf("\nO aumento ser� de %.2f, sendo assim, seu novo sal�rio ser� %.2f\n",soma,soma2);
		}
	if (s1 > 900){
		printf("\nSal�rio fora de limite para aumento\n");
		}
		
	return 0;
}