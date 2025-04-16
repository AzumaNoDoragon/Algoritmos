#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[20];

	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Seja Bem vindo, %s! \n", nome);
	
	return 0;
}