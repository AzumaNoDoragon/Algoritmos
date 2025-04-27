/*Elabore um programa que recebe a idade de um nadador. O programa deve classificar o nadador em
uma das categorias a seguir:
a) Infantil A = de 5 a 7 anos
b) Infantil B = de 8 a 10 anos
c) Juvenil A = de 11 a 13 anos
d) Juvenil B = de 14 a 17 anos
e) Sênior = maiores de 18 anos*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int idade;
	
	printf("Digite a idade do nadador para ele ser classificado: ");
	scanf("%d",&idade);
	
	switch(idade){
		case 5 ... 7:
			printf("\nO nadador adentra na categoria: Infantil A\n");
		   	break;
		case 8 ... 10:
			printf("\nO nadador adentra na categoria: Infantil B\n");
		   	break;
		case 11 ... 13:
			printf("\nO nadador adentra na categoria: Juvenil A\n");
		   	break;      
		case 14 ... 17:
			printf("\nO nadador adentra na categoria: Juvenil B\n");
		   	break;
		case 18 ... 100:
			printf("\nO nadador adentra na categoria: Sênior\n");
		   	break;  
	default:
		printf("\nNão tem idade para adentrar em categoria\n");
		break;		   	  	
	}
	
	return 0;
}