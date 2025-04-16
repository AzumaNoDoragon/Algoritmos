#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc;
	float area, h, base, raio;
	
	printf("1-Calcular a área de um retângulo;\n2-Calcular a área de um círculo;\n3-Calcular a área de um triângulo.\nEscolha O que deseja fazer: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
			printf("Digite a altura do retângulo: ");
			scanf("%f", &h);
			printf("Digite a largura do retângulo: ");
			scanf("%f", &base);
			
			area = h * base;

			printf("\nA área do retângulo é %0.2f.\n", area);
			break;
		case 2:
			printf("Digite o raio do circulo: ");
			scanf("%f", &raio);
			
			area = M_PI * pow(raio, 2);

			printf("\nA área do circulo é %0.2f.\n", area);
			break;
		case 3:			
			printf("Digite a altura do triângulo: ");
			scanf("%f", &h);
			printf("Digite a largura do triângulo: ");
			scanf("%f", &base);
			
			area = base * pow(h, 2);
			
			printf("\nA área do triângulo é %0.2f.\n", area);
			break;
		default:
			printf("\nVocê não escolheu uma opção valida!\n");
			break;
	}
	
	return 0;
}