#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Faça um algoritmo que peça para o usuário digitar se é “brasileiro” ou “estrangeiro”. 
a. Se for brasileiro, perguntar a região em que nasceu.
	i.Se for “sul”, apresentar a mensagem “você é está acostumado com frio”; 
	ii. Se for “sudeste”, apresentar a mensagem “você está acostumado com chuva”; 
	iii. Se for “centro-oeste”, apresentar a mensagem “você está acostumado com clima abafado”; 
	iv. Se for “nordeste”, apresentar a mensagem “você está acostumado com praias bonitas”;
	v. Se for “norte”, apresentar a mensagem “você está acostumado com chuvas no começo da tarde”.
b. Se for estrangeiro, apresentar a mensagem “seja bem-vindo ao Brasil”. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nasc[15], reg[15];
	
	printf("Digite se você é “brasileiro” ou “estrangeiro”: ");
	gets(nasc);
	
	if (strcmp(nasc, "brasileiro")==0){
		printf("Qual sua região (sul, sudeste, centro-oeste, nordeste ou norte): ");
		gets(reg);
		if (strcmp(reg, "sul")==0)
			printf("\nVocê é está acostumado com frio!\n");
		else if (strcmp(reg, "sudeste")==0)
			printf("\nVocê está acostumado com chuva!\n");
		else if (strcmp(reg, "centro-oeste")==0)
			printf("\nVocê está acostumado com clima abafado!\n");
		else if (strcmp(reg, "nordeste")==0)
			printf("\nVocê está acostumado com praias bonitas!\n");
		else if (strcmp(reg, "norte")==0)
			printf("\nVocê está acostumado com chuvas no começo da tarde!\n");
		else
			printf("\nVocê digitou algo de errado!\n");
	}
	else if (strcmp(nasc, "estrangeiro")==0)
		printf("\nSeja bem-vindo ao Brasil!\n");
	else
		printf("\nVocê digitou algo de errado!\n");
		
	return 0;
}