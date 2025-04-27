/*Escreva um programa que receba dois n�meros reais e execute uma das opera��es listadas a seguir,
de acordo com a escolha do usu�rio. Se for digitada uma op��o inv�lida, mostre mensagem de erro e
termine a execu��o do programa. As op��es s�o:
a) O primeiro n�mero elevado ao segundo n�mero.
b) Raiz quadrada de cada um dos n�meros.
c) Raiz c�bica de cada um dos n�meros.
Use a estrutura switch...case para coordenar as escolhas do usu�rio.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, soma, soma2;
	int es;
		
	printf("Digite os n�meros separados por enter\n");
	scanf("%f%f",&n1,&n2);
	
	printf("\nDigite o n�mero do que quer fazer em seguida\n");
	printf("1 - Elevar o primeiro pelo segundo\n");
	printf("2 - Raiz quadrada de cada n�mero\n");
	printf("3 - Raiz c�bica de cada n�mero\n");
	scanf("%d",&es);
	
	switch(es){
		
		case 1:
			soma = pow (n1, n2);
			printf("\nO primeiro n�mero elevado ao segundo � %.2f\n",soma);
			break;
		
		case 2:
			soma = pow(n1,1.0/2.0);
			soma2 = pow(n2,1.0/2.0);
			printf("\nA raiz do primeiro n�mero � %.2f e do segundo %.2f\n",soma,soma2);
			break;
		
		case 3:
			soma = pow(n1,1.0/3.0);
			soma2 = pow(n1,1.0/3.0);
			printf("\nA raiz do primeiro n�mero � %.2f e do segundo %.2f\n",soma,soma2);
			break;
		
	default:
		printf("\nEscolha n�o definida\n");
		break;
	}
	
	return 0;
}