#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça para o usuário digitar um número entre 1 
e 6 (inclusive). Se o valor digitado estiver no intervalo, apresentar a 
mensagem “Valor digitado com sucesso”. Do contrário, apresentar a 
mensagem “Valor fora do intervalo permitido”. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	printf("Digite o número à ser verificado: ");
	scanf("%d", &num);
	
	if(num>=1 && num<=6)
		printf("\nValor digitado com sucesso!\n");
	else
		printf("\nValor fora do intervalo permitido!\n");
	   	
	return 0;
}