#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Fa�a um algoritmo que pe�a para o usu�rio digitar se � �brasileiro� ou �estrangeiro�. 
a. Se for brasileiro, perguntar a regi�o em que nasceu.
	i.Se for �sul�, apresentar a mensagem �voc� � est� acostumado com frio�; 
	ii. Se for �sudeste�, apresentar a mensagem �voc� est� acostumado com chuva�; 
	iii. Se for �centro-oeste�, apresentar a mensagem �voc� est� acostumado com clima abafado�; 
	iv. Se for �nordeste�, apresentar a mensagem �voc� est� acostumado com praias bonitas�;
	v. Se for �norte�, apresentar a mensagem �voc� est� acostumado com chuvas no come�o da tarde�.
b. Se for estrangeiro, apresentar a mensagem �seja bem-vindo ao Brasil�. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nasc[15], reg[15];
	
	printf("Digite se voc� � �brasileiro� ou �estrangeiro�: ");
	gets(nasc);
	
	if (strcmp(nasc, "brasileiro")==0){
		printf("Qual sua regi�o (sul, sudeste, centro-oeste, nordeste ou norte): ");
		gets(reg);
		if (strcmp(reg, "sul")==0)
			printf("\nVoc� � est� acostumado com frio!\n");
		else if (strcmp(reg, "sudeste")==0)
			printf("\nVoc� est� acostumado com chuva!\n");
		else if (strcmp(reg, "centro-oeste")==0)
			printf("\nVoc� est� acostumado com clima abafado!\n");
		else if (strcmp(reg, "nordeste")==0)
			printf("\nVoc� est� acostumado com praias bonitas!\n");
		else if (strcmp(reg, "norte")==0)
			printf("\nVoc� est� acostumado com chuvas no come�o da tarde!\n");
		else
			printf("\nVoc� digitou algo de errado!\n");
	}
	else if (strcmp(nasc, "estrangeiro")==0)
		printf("\nSeja bem-vindo ao Brasil!\n");
	else
		printf("\nVoc� digitou algo de errado!\n");
		
	return 0;
}