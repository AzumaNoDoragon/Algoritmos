#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a para o usu�rio digitar um n�mero inferior 
a 1 ou superior a 6. Se o valor digitado estiver correto, apresentar a 
mensagem �Valor digitado com sucesso�. Do contr�rio, apresentar a 
mensagem �Valor n�o pode estar entre 1 e 6�. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	printf("Digite o n�mero � ser verificado: ");
	scanf("%d", &num);
	
	if(num < 1 || num > 6)
		printf("\nValor digitado com sucesso!\n");
	else
		printf("\nValor n�o pode estar entre 1 e 6!\n");
	   	
	return 0;
}