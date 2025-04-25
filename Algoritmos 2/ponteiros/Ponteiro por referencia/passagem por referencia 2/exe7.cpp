/*
	Crie um programa que apresente o seguinte menu: 
	1-Converter um valor de Celsius para Farenheit 
	2-Converter um valor de Farenheit para Celsius 
	0-Sair 
	Uma vez que o usuário escolha a opção 1 ou 2, o programa deve pedir a temperatura, 
	fazer a conversão de Celsius para Farenheit ou Farenheit para Celsius (dependendo da 
	opção escolhida) e mostre o valor original e o valor convertido. 
	Por fim, o menu deve ser apresentado novamente. 
*/

#include <stdio.h>
#include <string.h>

void menu(int *opc);
void recebe(int opc, float *temp);
void converte(int opc, float *tempConv, float tempOriginal);
void apresenta(float tempOriginal, float tempConv);

int main(int argc, char** argv)
{
	float tempOriginal = 0, tempConv = 0;
	int opc;
	do{
		menu(&opc);
		switch(opc)
		{
		case 1:
			recebe(opc, &tempOriginal);
			converte(opc, &tempConv, tempOriginal);
			apresenta(tempOriginal, tempConv);
			break;
		case 2:
			recebe(opc, &tempOriginal);
			converte(opc, &tempConv, tempOriginal);
			apresenta(tempOriginal, tempConv);
			break;
		default:
			if(opc != 0){
				printf("\nValor incorreto! Tente novamente.\n\n");
			}
			break;
		}
	}while(opc!=0);
	
	return 0;
}

void menu(int *opc){
	printf("<<< CONVERSOR >>>");
	printf("\n1 - Converter um valor de Celsius para Farenheit");
	printf("\n2 - Converter um valor de Farenheit para Celsius\n");
	printf("\n0 - Sair.");
	printf("Digite o que deseja fazer: ");
	scanf("%d", opc);
	
}

void recebe(int opc, float *temp){
	char text[11];
	strcpy(text, (opc == 1) ? "Celsius" : "Fahrenheit");
	printf("Digite o valor a ser convertido em %s: ", text);
	scanf("%f", temp);
}

void converte(int opc, float *tempConv, float tempOriginal){
	// opc == 1: Celsius -> Fahrenheit
	// opc != 1: Fahrenheit -> Celsius
	*tempConv = (opc == 1) ? (9 * tempOriginal / 5) + 32 : 5 * (tempOriginal - 32) / 9;
}

void apresenta(float tempOriginal, float tempConv){
	printf("\nA temperatura original e %0.2f e convertida ficou %0.2f.\n\n", tempOriginal, tempConv);
}