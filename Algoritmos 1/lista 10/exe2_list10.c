#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char opc;
	
	printf("A-Avi„o;\nB-Carro;\nC-Cruzeiro.\nEscolha como deseja viajar: ");
	scanf("%c", &opc);
	
	switch(opc){
		case 'A': case 'a':
			printf("\n… mais r·pido!\n");
			break;
		case 'B': case 'b':
			printf("\n… mais barato!\n");
			break;
		case 'C': case 'c':
			printf("\n… mais bonito!\n");
			break;
		default:
			printf("\nEscolha invalida!\n");
			break;
	}
	
	return 0;
}