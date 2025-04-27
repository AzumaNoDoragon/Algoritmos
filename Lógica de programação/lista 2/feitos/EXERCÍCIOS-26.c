/*Numa fábrica, uma máquina precisa de manutenção sempre que o número de peças defeituosas
supera 10% da produção. Dados o total de peças produzidas e o total de peças defeituosas, informe se
a máquina precisa de manutenção.*/ 

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int df, pe, pd;
	
	printf("Digite a quantidade de peças produzidas: ");
	scanf("%d",&pe);
	printf("Digite a quantidade de peças defeituosas: ");
	scanf("%d",&df);
	
	pd = floor(pe * 0.1);

	if (df >= pd){
		printf("\nA máquina precisa de manutenção.\n");
		}
		else{
			printf("\nDe continuidade a produção.\n");
			}
		
	return 0;
}