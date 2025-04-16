#include <stdio.h>
#include <locale.h>

/*Imagine um problema de gerenciamento de fila de um banco que emite senhas 
para aguardar na fila. Fa�a um algoritmo que: 
a. Pe�a o n�mero da senha para o usu�rio; 
b. Apresente o menu 1-Prioridade; 2-Aposentado; 3-Comum. 
c. Se o n�mero da senha for menor que 100, o algoritmo deve apresentar a 
mensagem: �aguarde para ser atendido�. 
d. Sen�o, o algoritmo deve apresentar uma mensagem, conforme a op��o: 
	i. Se for 1, �Voc� ser� reagendado para amanh�; 
	ii. Se for 2, �Voc� ser� reagendado para depois de amanh�; 
	iii. Se for 3, �Voc� deve tentar outro dia�. */

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
			printf("\nVoc� ser� reagendado para amanh�!\n");
		else if (menu==2)
			printf("\nVoc� ser� reagendado para depois de amanh�!\n");
		else if (menu==3)
			printf("\nVoc� deve tentar outro dia!\n");
		else
			printf("\nDigitou um n�mero invalido.\n");
	}
		
	return 0;
}