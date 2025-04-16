#include <stdio.h>

int menu();
float read();
void conv();
void show(float conv);

int main(){
	int opc;
		
	while(opc != 0){
		opc = menu();
		switch(opc)
		{
		case 1:
			conv(opc);
			break;
		case 2:
			conv(opc);
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
	
	printf("Digite a velocidade para ser convertida: ");
	scanf("%f", &velo);
	
	return velo;
}

void conv(int opc){
	float velo, conv;
	
	velo = read();
	if(opc == 1){
		conv = velo * 1.60934;
	} else if(opc == 2){
		conv = velo * 0.621371;
	}
	
	show(conv);
}

void show(float conv){
	printf("\nO valor da conversao e: %0.2f.\n", conv);
}