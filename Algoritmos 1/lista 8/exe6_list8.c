#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a tr�s lados de um tri�ngulo (pode ser apenas 
n�meros inteiros). O programa deve apresentar se os lados apresentados 
formam ou n�o um tri�ngulo. As mensagens devem ser: �� um 
tri�ngulo� ou �n�o � um tri�ngulo�. Para saber se � poss�vel criar um 
tri�ngulo, a regra �: cada lado precisa ser menor que a soma dos outros 
dois lados (do contr�rio, o tri�ngulo n�o fecha).*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int a, b, c;
	
	printf("digite os lados do tri�ngulo\n");
	printf("Lado A: ");
	scanf("%d", &a);
	printf("Lado B: ");
	scanf("%d", &b);
	printf("Lado C: ");
	scanf("%d", &c);
	
	if(a>0 && b>0 && c>0 && a < b + c && b < a + c && c < a + b)
		printf("\n� um tri�ngulo!\n");
	else
		printf("\nN�o � um tri�ngulo!\n");
	   	
	return 0;
}