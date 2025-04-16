#include <stdio.h>
#include <locale.h>

/*Imagine que em um determinado pa�s, os homens podem se aposentar 
se tiverem trabalhado pelo menos 30 anos e tenham mais de 65 anos. E, 
no caso das mulheres, elas podem se aposentar se tiverem trabalhado 
pelo menos 25 anos e tenham mais de 60 anos. Reparem que foi usado 
#E# no enunciado, ent�o, deve-se seguir a risca o que foi pedido. Fa�a um 
algoritmo que pe�a o g�nero, a idade e tempo de contribui��o. Em 
seguida, o algoritmo deve apresentar se a pessoa pode ou n�o se 
aposentar. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char gen;
	int idade, temp_contr;
	
	printf("Para saber se pode aposentar, digite as informa��es abaixo:\n");
	printf("Seu g�nero(f/m): ");
	scanf(" %c", &gen);
	printf("Sua idade: ");
	scanf("%d", &idade);
	printf("Tempo de contribui��o: ");
	scanf("%d", &temp_contr);
	
	if((gen == 'f' && idade >= 60 && temp_contr >= 25) || (gen == 'm' && idade >= 65 && temp_contr >= 30))
		printf("\nVoc� j� pode aposentar!\n");
	else
		printf("\nVoc� n�o pode aposentar!\n");
	   	
	return 0;
}