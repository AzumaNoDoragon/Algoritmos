#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc;
	
	printf("1-Zikachu;\n2-Zulbassauro;\n3-Zharmander.\nEscolha um MonstroDex: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
			printf("\nMonstrinho elétrico da categoria rato.\n");
			break;
		case 2:
			printf("\nMonstrinho de grama da categoria semente.\n");
			break;
		case 3:
			printf("\nMonstrinho de fogo da categoria lagarto.\n");
			break;
		default:
			printf("\nMonstrinho não cadastrado. Há 8900 monstros! Temos que pegar!\n");
			break;
	}
	
	return 0;
}