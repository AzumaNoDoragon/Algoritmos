#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;

	printf("Digite sua Idade: ");
	scanf("%d", &idade);
	printf("Legal! Você tem %d anos! \n", idade);	
	
	return 0;	
}