/*Em uma empresa, os funcionários que forem solteiros não receberão bônus natalinos. Os funcionários
que não forem solteiros e tiverem filhos receberão um bônus de 20% de seu salário-base (ou seja,
receberão o valor de seu salário acrescido de 20%). Os funcionários que não forem solteiros e não
tiverem filhos receberão um bônus de 15% de seu salário-base (ou seja, receberão o valor de seu
salário mais 15%).*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float sb, calc, bon;
	char casado[4], filho[4];
	
	printf("Digite seu salário-base para saber o bônus: ");
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
		printf("\nA bonificação será de %.2f, totalizando %.2f de salário\n",bon,calc);
		}
		else if((strcmp(strupr(casado),"SIM") == 0) && (strcmp(strupr(filho),"NAO") == 0)){	
			bon = sb * 0.15;
			calc = bon + sb;
			printf("\nA bonificação será de %.2f, totalizando %.2f de salário\n",bon,calc);
			}
			else{
				printf("\nNão adentra aos requisitos para a bonificação\n");
					}		
	
	return 0;
}