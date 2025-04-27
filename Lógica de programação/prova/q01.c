/* 
Nome Gabriel Santos Afini da Silva
RA 2267284
---------------------------------------------------------------------------------------------
Questão 01
Escreva um programa que receba dois números reais e execute as operações listadas 
a seguir, de acordo com a escolha do usuário. Se a opção digitada for inválida, 
mostre uma mensagem de erro e termine a execução do programa. Lembre-se de que, 
na operação 4, o segundo número deve ser diferente de zero. Use a estrutura switch...case 
para coordenar as escolhas do usuário.
1 – Média entre os números digitados
2 – Diferença do maior pelo menor
3 – Produto entre os números digitados
4 – Divisão do primeiro pelo segundo
---------------------------------------------------------------------------------------------
Detalhamento
	Entradas de dados:
	Número 1, número 2
	Escolha de operação
	
	Saídas de dados: 
	Erro
	Média 
	Diferença
	Produto
	Divisão
	
	Processamento
	Obter número 1, número 2 
	Obter escolha de 1 a 4 para aplicar uma operação
	Se escolha igual a 4 e número 2 igual a zero gerar erro e pedir os números novamente
	Se escolha diferente de 1 a 4, gerar erro
	Se escolha igual a 1, então, número 1 + número 2 ÷ 2, escreva result
	Se escolha igual a 2, então, Se número 1 maior que número 2, então número 1 - número 2, escreva result
		Se não, número 2 - número 1, escreva result 
	Se escolha igual a 3, então, número 1 x número 2, escreva result
	Se escolha igual a 4, então, número 1 ÷ número 2, escreva result
*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, result;
	int es;
	
	do{		 			 
		printf("Digite dois numeros (separados por enter)\n");
		scanf("%f%f",&n1,&n2);
	
		printf("\nEscolha o que será feito em seguida.\n");
		printf("1 – Média entre os números digitados\n");
		printf("2 – Diferença do maior pelo menor\n");
		printf("3 – Produto entre os números digitados\n");
		printf("4 – Divisão do primeiro pelo segundo\n");
		scanf("%d",&es);
		
		if ((es == 4) && (n2 == 0))
			printf("\nNa operação 4, o segundo número deve ser diferente de zero.\n\n");
			
	} while((es == 4) && (n2 == 0));
		
	switch(es){
		
		case 1:
			result = (n1 + n2) / 2;
			printf("\nA média é %.2f\n",result);
			break;
		
		case 2:
			if (n1 > n2)
				result = n1 - n2;
				else{
					result = n2 - n1;
				}
					printf("\nA diferença é %.2f\n",result);
			break;
		
		case 3:
			result = n1 * n2;
			printf("\nO produto é %.2f\n",result);
			break;
		
		case 4:
			result = n1 / n2;
			printf("\nO resultado da divisão é %.2f\n",result);
			break;
	
	default:
		printf("\nEscolha invalida\n");
		break;
	}
	
	return 0;
}