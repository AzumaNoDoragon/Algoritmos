#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int anoNascimento, ano, idade;
	
	printf("Digite o ano em que voc� nasceu: ");
	scanf("%d", &anoNascimento);
	printf("Digite o ano em que estamos: ");
	scanf("%d", &ano);
	
	idade = ano - anoNascimento;
	
	printf("\nVoc� tem %d anos!\n", idade);
	
	return 0;
}