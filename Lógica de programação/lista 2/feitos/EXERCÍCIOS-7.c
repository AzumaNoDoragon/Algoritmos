/*Obter um valor qualquer e perguntar ao usu�rio se este valor � em d�lares ou em reais. Caso sejam
d�lares, convert�-los para reais. Se forem reais, convert�-los para d�lares.
*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float va, calc;
	int es;
		
	printf("Digite o valor para convers�o: ");
	scanf("%f",&va);
	printf("Valor digitado �:\n");
	printf("1 - Dolar\n");
	printf("2 - Reais\n");
	scanf("%d",&es);
			
	switch(es){
		case 1:
			calc = va * 5.31;
			printf("\nA convers�o � %.2f reais\n\n",calc);
			break;
		case 2:
			calc = va / 5.31;
			printf("\nA convers�o � $%.2f d�lares\n\n",calc);
			break;
	default:
		printf("\nEscolha inv�lida\n\n");  	   	
		break;
	}
	
	return 0;
}