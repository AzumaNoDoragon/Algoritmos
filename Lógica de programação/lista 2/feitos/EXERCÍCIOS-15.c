/*Em uma empresa, os funcion�rios que forem solteiros n�o receber�o b�nus natalinos. Os funcion�rios
que n�o forem solteiros e tiverem filhos receber�o um b�nus de 20% de seu sal�rio-base (ou seja,
receber�o o valor de seu sal�rio acrescido de 20%). Os funcion�rios que n�o forem solteiros e n�o
tiverem filhos receber�o um b�nus de 15% de seu sal�rio-base (ou seja, receber�o o valor de seu
sal�rio mais 15%).*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float sb, calc, bon;
	char casado[4], filho[4];
	
	printf("Digite seu sal�rio-base para saber o b�nus: ");
	scanf("%f",&sb);
	printf("\nDigite SIM ou NAO\n");
	printf("Casado? ");
	fflush(stdin);
	gets(casado);
	printf("filhos? ");
	fflush(stdin);
	gets(filho);
	
	if((strcmp(strupr(casado),"SIM") == 0) && (strcmp(strupr(filho),"SIM") == 0)){	
		bon = sb * 0.20;
		calc = bon + sb;
		printf("\nA bonifica��o ser� de %.2f, totalizando %.2f de sal�rio\n",bon,calc);
		}
		else if((strcmp(strupr(casado),"SIM") == 0) && (strcmp(strupr(filho),"NAO") == 0)){	
			bon = sb * 0.15;
			calc = bon + sb;
			printf("\nA bonifica��o ser� de %.2f, totalizando %.2f de sal�rio\n",bon,calc);
			}
			else{
				printf("\nN�o adentra aos requisitos para a bonifica��o\n");
					}		
	
	return 0;
}