#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a um n�mero inteiro. Em seguida, o algoritmo 
deve apresentar uma mensagem conforme a seguinte regra: 
a. Se o valor for positivo: �Valor positivo�; 
b. Se o valor for negativo: �Valor negativo�; 
c. Se n�o for nenhuma das op��es (se for 0): �Valor neutro�. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	printf("Digite o n�mero: ");
	scanf("%d", &num);
	
	if (num>0)
		printf("\nValor positivo!\n");
	else if (num<0)
		printf("\nValor negativo!\n");
	else
		printf("\nValor neutro!\n");
		
	return 0;
}