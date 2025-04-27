/*Escreva um programa que receba dois números reais e execute uma das operações listadas a seguir,
de acordo com a escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e
termine a execução do programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.
Use a estrutura switch...case para coordenar as escolhas do usuário.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, soma, soma2;
	int es;
		
	printf("Digite os números separados por enter\n");
	scanf("%f%f",&n1,&n2);
	
	printf("\nDigite o número do que quer fazer em seguida\n");
	printf("1 - Elevar o primeiro pelo segundo\n");
	printf("2 - Raiz quadrada de cada número\n");
	printf("3 - Raiz cúbica de cada número\n");
	scanf("%d",&es);
	
	switch(es){
		
		case 1:
			soma = pow (n1, n2);
			printf("\nO primeiro número elevado ao segundo é %.2f\n",soma);
			break;
		
		case 2:
			soma = pow(n1,1.0/2.0);
			soma2 = pow(n2,1.0/2.0);
			printf("\nA raiz do primeiro número é %.2f e do segundo %.2f\n",soma,soma2);
			break;
		
		case 3:
			soma = pow(n1,1.0/3.0);
			soma2 = pow(n1,1.0/3.0);
			printf("\nA raiz do primeiro número é %.2f e do segundo %.2f\n",soma,soma2);
			break;
		
	default:
		printf("\nEscolha não definida\n");
		break;
	}
	
	return 0;
}