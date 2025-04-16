#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc, can1 = 0, can2 = 0;
	
	while(opc > 0){
		printf("Votação\n1 para Fulano\n2 para Cicrano\n\n0 para Sair\n\nDigite em quem deseja votar: ");
		scanf("%d", &opc);
		
		if(opc == 1){
			can1++;
		} else if(opc == 2){
			can2++;
		} else if(opc != 0){
			printf("\nNão existe este candidato!\n");
		}
	}
	
	if(can1 > can2){
		printf("\nFulano ganhou!\n");
	} else if(can2 > can1){
		printf("\nCicrano ganhou!\n");
	} else {
		printf("\nDeu empate!\n");
	}
	
	return 0;
}