/*Numa f�brica, uma m�quina precisa de manuten��o sempre que o n�mero de pe�as defeituosas
supera 10% da produ��o. Dados o total de pe�as produzidas e o total de pe�as defeituosas, informe se
a m�quina precisa de manuten��o.*/ 

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int df, pe, pd;
	
	printf("Digite a quantidade de pe�as produzidas: ");
	scanf("%d",&pe);
	printf("Digite a quantidade de pe�as defeituosas: ");
	scanf("%d",&df);
	
	pd = floor(pe * 0.1);

	if (df >= pd){
		printf("\nA m�quina precisa de manuten��o.\n");
		}
		else{
			printf("\nDe continuidade a produ��o.\n");
			}
		
	return 0;
}