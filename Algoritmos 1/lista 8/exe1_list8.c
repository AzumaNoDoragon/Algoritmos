#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a para o usu�rio digitar um n�mero entre 1 
e 6 (inclusive). Se o valor digitado estiver no intervalo, apresentar a 
mensagem �Valor digitado com sucesso�. Do contr�rio, apresentar a 
mensagem �Valor fora do intervalo permitido�. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	printf("Digite o n�mero � ser verificado: ");
	scanf("%d", &num);
	
	if(num>=1 && num<=6)
		printf("\nValor digitado com sucesso!\n");
	else
		printf("\nValor fora do intervalo permitido!\n");
	   	
	return 0;
}