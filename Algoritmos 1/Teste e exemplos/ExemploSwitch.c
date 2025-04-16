#include <stdio.h>

int main()
{
	int opc;
	
	do{
		printf("1- Dia");
		printf("\n2- Noite");
		printf("\n0- Sair");
		printf("\nDigite o valor: ");
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
				printf("\nGosto do Dia\n\n");
				break;
			case 2:
				printf("\nGosto da Noite\n\n");
				break;
			default:
				if(opc != 0) {
					printf("\nOpcao invalida!\n");
				}
				break;
		}
	}while(opc!=0);
	
	printf("\nBye-bye...\n");
	
	return 0;
}