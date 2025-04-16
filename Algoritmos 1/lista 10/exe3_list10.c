#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc;
	float area, h, base, raio;
	
	printf("1-Calcular a �rea de um ret�ngulo;\n2-Calcular a �rea de um c�rculo;\n3-Calcular a �rea de um tri�ngulo.\nEscolha O que deseja fazer: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
			printf("Digite a altura do ret�ngulo: ");
			scanf("%f", &h);
			printf("Digite a largura do ret�ngulo: ");
			scanf("%f", &base);
			
			area = h * base;

			printf("\nA �rea do ret�ngulo � %0.2f.\n", area);
			break;
		case 2:
			printf("Digite o raio do circulo: ");
			scanf("%f", &raio);
			
			area = M_PI * pow(raio, 2);

			printf("\nA �rea do circulo � %0.2f.\n", area);
			break;
		case 3:			
			printf("Digite a altura do tri�ngulo: ");
			scanf("%f", &h);
			printf("Digite a largura do tri�ngulo: ");
			scanf("%f", &base);
			
			area = base * pow(h, 2);
			
			printf("\nA �rea do tri�ngulo � %0.2f.\n", area);
			break;
		default:
			printf("\nVoc� n�o escolheu uma op��o valida!\n");
			break;
	}
	
	return 0;
}