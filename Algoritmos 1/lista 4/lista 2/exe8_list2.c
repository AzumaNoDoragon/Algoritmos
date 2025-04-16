#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade, ano, anoNascimento;

	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite o ano em que estamos: ");
	scanf("%d", &ano);
	
	anoNascimento = ano - idade;
	
	printf("\nO ano que você nasceu é %d!\n", anoNascimento);
	
	return 0;	
}