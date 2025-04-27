/*Perguntar ao usuário se ele deseja calcular:
a) a área de um triângulo
b) a área de um círculo
c) a área de um cubo
d) a área de um cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int opcao;
	float bt, at, rc, pi, ac, rc2, ac2, soma;
	pi = 3.1415;
	
	do{	
		
		printf("Especifique qual a forma geométrica sera calculada a área:\n\n");
		printf("1 - triângulo\n"); 
		printf("2 - círculo\n");
		printf("3 - cubo\n");
		printf("4 - cilindro\n\n");
		printf("5 - para sair do programa\n\n");
		scanf("%d",&opcao);
			
			switch(opcao){
			
				case 1:
				   	printf("\nDigite a base do triângulo: ");
					scanf("%f",&bt);
				    printf("Digite a altura do triângulo: ");
			   		scanf("%f",&at);
				   	soma = (bt * at) / 2;
					printf("\nA area e %.2f\n\n",soma);
					break;
				
				case 2:
			  		printf("\nDigite o raio do círculo: ");
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
					printf("\nopção inválida\n\n");
					break; 
			}
	} while (opcao!=5);
	
	return 0;
}