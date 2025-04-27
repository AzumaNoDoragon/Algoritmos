/*Escreva um programa que receba dois n�meros reais e execute as opera��es listadas a seguir, de
acordo com a escolha do usu�rio. Se a op��o digitada for inv�lida, mostre uma mensagem de erro e
termine a execu��o do programa. Lembre-se de que, na opera��o 4, o segundo n�mero deve ser
diferente de zero. Use a estrutura switch...case para coordenar as escolhas do usu�rio.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, result;
	int es;
	
	do{		 			 
		printf("Digite dois numeros (separados por enter)\n");
		scanf("%f%f",&n1,&n2);
	
		printf("\nEscolha o que ser� feito em seguida.\n");
		printf("1 � M�dia entre os n�meros digitados\n");
		printf("2 � Diferen�a do maior pelo menor\n");
		printf("3 � Produto entre os n�meros digitados\n");
		printf("4 � Divis�o do primeiro pelo segundo\n");
		scanf("%d",&es);
		
		if ((es == 4) && (n2 == 0))
			printf("\nNa opera��o 4, o segundo n�mero deve ser diferente de zero.\n\n");
			
	} while((es == 4) && (n2 == 0));
		
	switch(es){
		
		case 1:
			result = (n1 + n2) / 2;
			printf("\nA m�dia � %.2f\n",result);
			break;
		
		case 2:
			if (n1 > n2)
				result = n1 - n2;
				else{
					result = n2 - n1;
				}
					printf("\nA diferen�a � %.2f\n",result);
			break;
		
		case 3:
			result = n1 * n2;
			printf("\nO produto � %.2f\n",result);
			break;
		
		case 4:
			result = n1 / n2;
			printf("\nO resultado da divis�o � %.2f\n",result);
			break;
	
	default:
		printf("\nEscolha invalida\n");
		break;
	}
	
	return 0;
}