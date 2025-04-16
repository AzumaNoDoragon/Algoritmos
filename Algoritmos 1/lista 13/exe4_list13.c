#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char esc = 's';
	int opc, can1 = 0, can2 = 0;
	
	while(esc == 's' || esc == 'S'){
		printf("Votação\n1 para Fulano\n2 para Cicrano\n\nDigite em quem deseja votar: ");
		scanf("%d", &opc);
		
		if(opc == 1){
			can1++;
		} else if(opc == 2){
			can2++;
		} else if(opc != 0){
			printf("\nNão existe este candidato!\n");
		}
		
		printf("\nDeseja votar novamente?(s/n) ");
		scanf(" %c", &esc);
	}
	
	if(can1 > can2){
		printf("\nFulano ganhou com %d votos!\n", can1);
	} else if(can2 > can1){
		printf("\nCicrano ganhou com %d votos!\n", can2);
	} else {
		printf("\nDeu empate com %d votos!\n", can1);
	}
	
	return 0;
}