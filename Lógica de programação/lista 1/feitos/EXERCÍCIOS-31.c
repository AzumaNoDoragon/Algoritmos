/* Tendo como dados de entrada dois pontos quaisquer de um plano cartesiano
P(X1,Y1)e Q(X2,Y2) calcule e mostre a dist�ncia entre eles. A dist�ncia
� dada pela f�rmula:raiz((X2 - X1)^2 + (Y2 - Y1)^2) */

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float x1, x2 ,y1 , y2, soma;

	printf("Para fazer o c�lculo da dist�ncia de P e Q digite:\n");	
	printf("Posi��o x do ponto P\n");
	scanf("%f",&x1);
	printf("Posi��o y do ponto P\n");
	scanf("%f",&y1);
	printf("Posi��o x do ponto Q\n");
	scanf("%f",&x2);
	printf("Posi��o y do ponto Q\n");
	scanf("%f",&y2);
	soma = pow(pow(x2 - x1,2.0) + pow(y2 - y1,2.0),1.0/2.0);
	printf("\nA dist�ncia entre os pontos � %.2f\n",soma);
		
	return 0;
}