#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça para o usuário digitar um número inferior 
a 1 ou superior a 6. Se o valor digitado estiver correto, apresentar a 
mensagem “Valor digitado com sucesso”. Do contrário, apresentar a 
mensagem “Valor não pode estar entre 1 e 6”. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	printf("Digite o número à ser verificado: ");
	scanf("%d", &num);
	
	if(num < 1 || num > 6)
		printf("\nValor digitado com sucesso!\n");
	else
		printf("\nValor não pode estar entre 1 e 6!\n");
	   	
	return 0;
}