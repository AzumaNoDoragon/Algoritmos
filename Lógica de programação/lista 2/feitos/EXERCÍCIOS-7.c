/*Obter um valor qualquer e perguntar ao usuário se este valor é em dólares ou em reais. Caso sejam
dólares, convertê-los para reais. Se forem reais, convertê-los para dólares.
*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float va, calc;
	int es;
		
	printf("Digite o valor para conversão: ");
	scanf("%f",&va);
	printf("Valor digitado é:\n");
	printf("1 - Dolar\n");
	printf("2 - Reais\n");
	scanf("%d",&es);
			
	switch(es){
		case 1:
			calc = va * 5.31;
			printf("\nA conversão é %.2f reais\n\n",calc);
			break;
		case 2:
			calc = va / 5.31;
			printf("\nA conversão é $%.2f dólares\n\n",calc);
			break;
	default:
		printf("\nEscolha inválida\n\n");  	   	
		break;
	}
	
	return 0;
}