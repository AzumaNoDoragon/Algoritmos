#include <stdio.h>
#include <locale.h>

/*Imagine que em um determinado país, os homens podem se aposentar 
se tiverem trabalhado pelo menos 30 anos e tenham mais de 65 anos. E, 
no caso das mulheres, elas podem se aposentar se tiverem trabalhado 
pelo menos 25 anos e tenham mais de 60 anos. Reparem que foi usado 
#E# no enunciado, então, deve-se seguir a risca o que foi pedido. Faça um 
algoritmo que peça o gênero, a idade e tempo de contribuição. Em 
seguida, o algoritmo deve apresentar se a pessoa pode ou não se 
aposentar. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char gen;
	int idade, temp_contr;
	
	printf("Para saber se pode aposentar, digite as informações abaixo:\n");
	printf("Seu gênero(f/m): ");
	scanf(" %c", &gen);
	printf("Sua idade: ");
	scanf("%d", &idade);
	printf("Tempo de contribuição: ");
	scanf("%d", &temp_contr);
	
	if((gen == 'f' && idade >= 60 && temp_contr >= 25) || (gen == 'm' && idade >= 65 && temp_contr >= 30))
		printf("\nVocê já pode aposentar!\n");
	else
		printf("\nVocê não pode aposentar!\n");
	   	
	return 0;
}