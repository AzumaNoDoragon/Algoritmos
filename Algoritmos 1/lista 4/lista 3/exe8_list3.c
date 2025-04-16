#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	
	float x1, y1, x2, y2, X, Y, soma, dist;
	
	printf("Informe os valores de x1 e x2, separados por 'Enter': ");
	scanf("%f %f", &x1, &x2);
	printf("Informe os valores de y1 e y2, separados por 'Enter': ");
	scanf("%f %f", &y1, &y2);
	
	X = x2 - x1;
	Y = y2 - y1;
	soma = (X * X) + (Y * Y);
	dist = sqrt(soma);
	
	printf("\nA distância entre os pontos é %0.2f!\n ", dist);
	
	return 0;
}