/*Perguntar ao usu�rio se ele deseja calcular:
a) a �rea de um tri�ngulo
b) a �rea de um c�rculo
c) a �rea de um cubo
d) a �rea de um cilindro
Solicitar os dados necess�rios para calcular a �rea escolhida, e mostrar o resultado na tela.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int opcao;
	float bt, at, rc, pi, ac, rc2, ac2, soma;
	pi = 3.1415;
	
	do{	
		
		printf("Especifique qual a forma geom�trica sera calculada a �rea:\n\n");
		printf("1 - tri�ngulo\n"); 
		printf("2 - c�rculo\n");
		printf("3 - cubo\n");
		printf("4 - cilindro\n\n");
		printf("5 - para sair do programa\n\n");
		scanf("%d",&opcao);
			
			switch(opcao){
			
				case 1:
				   	printf("\nDigite a base do tri�ngulo: ");
					scanf("%f",&bt);
				    printf("Digite a altura do tri�ngulo: ");
			   		scanf("%f",&at);
				   	soma = (bt * at) / 2;
					printf("\nA area e %.2f\n\n",soma);
					break;
				
				case 2:
			  		printf("\nDigite o raio do c�rculo: ");
				   	scanf("%f",&rc);
					soma = pow (rc, 2) * pi;
					printf("\nA area e %.2f\n\n",soma);
					break;
				
				case 3:
					printf("\nDigite a aresta do cubo: ");
					scanf("%f",&ac);
					soma = pow (ac, 2) * 6;
					printf("\nA area e %.2f\n\n",soma);
					break;
				
				case 4:	
					printf("\nDigite o raio do cilindro: ");
					scanf("%f",&rc2);
					printf("Digite a altura do cilindro: ");
					scanf("%f",&ac2);
					soma = pow (rc2, 2) * pi * ac2;
					printf("\nA area e %.2f\n\n",soma);
					break;
				
				case 5:
					break;	
				
				default:
					printf("\nop��o inv�lida\n\n");
					break; 
			}
	} while (opcao!=5);
	
	return 0;
}