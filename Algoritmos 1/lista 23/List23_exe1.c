#include <stdio.h>

int menu();
float read();
void convKm();
void convMi();
void show(float conv, float velo);

int main(){
	int opc;
		
	while(opc != 0){
		opc = menu();
		switch(opc)
		{
		case 1:
			convKm();
			break;
		case 2:
			convMi();
			break;
		default:
			if(opc != 0){
				printf("\nNumero inexistente.");
			}
			break;
		}
	}
	 
	 printf("Bye-Bye");
	 
	return 0;
}

int menu(){
	int opc;
	
	printf("Digite o que deseja fazer: \n");
	printf("1 - Converter quilometros em milhas.\n");
	printf("2 - Converter milhas em quilometros.\n");
	printf("0 - Sair.\n");
	scanf("%d", &opc);
	
	return opc;
}

float read(){
	float velo;
	
	printf("Digite a distancia a ser convertida: ");
	scanf("%f", &velo);
	
	return velo;
}

void convKm(){
	float velo, conv;
	
	velo = read();
	
	conv = velo * 0.621371;
	
	show(conv, velo);
}

void convMi(){
	float velo, conv;
	
	velo = read();
	
	conv = velo * 1.60934;	
	
	show(conv, velo);
}

void show(float conv, float velo){
	printf("\nO valor original e: %0.2f.", velo);
	printf("\nO valor da conversao e: %0.2f.\n\n", conv);
}