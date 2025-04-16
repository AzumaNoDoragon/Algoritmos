#include <stdio.h>
#include <locale.h>

/*Imagine um problema de gerenciamento de fila de um banco que emite senhas 
para aguardar na fila. Faça um algoritmo que: 
a. Peça o número da senha para o usuário; 
b. Apresente o menu 1-Prioridade; 2-Aposentado; 3-Comum. 
c. Se o número da senha for menor que 100, o algoritmo deve apresentar a 
mensagem: “aguarde para ser atendido”. 
d. Senão, o algoritmo deve apresentar uma mensagem, conforme a opção: 
	i. Se for 1, “Você será reagendado para amanhã”; 
	ii. Se for 2, “Você será reagendado para depois de amanhã”; 
	iii. Se for 3, “Você deve tentar outro dia”. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int senha, menu;
	
	printf("Digite a sua senha: ");
	scanf("%d", &senha);
	if (senha<100){
		printf("\nAguarde para ser atendido!\n");
		return 1;
	}
		
	printf("Escolha o menu(1-Prioridade; 2-Aposentado; 3-Comum): ");
	scanf("%d", &menu);
		
	if (senha>=100){
		if (menu==1)
			printf("\nVocê será reagendado para amanhã!\n");
		else if (menu==2)
			printf("\nVocê será reagendado para depois de amanhã!\n");
		else if (menu==3)
			printf("\nVocê deve tentar outro dia!\n");
		else
			printf("\nDigitou um número invalido.\n");
	}
		
	return 0;
}