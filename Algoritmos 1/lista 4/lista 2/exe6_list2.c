#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade, ano, anoNascimento;

	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite o ano atual: ");
	scanf("%d", &ano);
	
	anoNascimento = ano - idade;
	
	printf("Você tem %d anos e nasceu em %d", idade, anoNascimento);
	
	return 0;	
}