#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a uma senha (apenas num�rica). Em seguida, o
algoritmo deve pedir a confirma��o da senha. Se a senha repetida for igual
� original, apresentar a mensagem �Senha criada com sucesso�. Do
contr�rio, apresentar a mensagem �senha n�o confere�.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int senha, senhaComparativo, tentativas;
	tentativas = 1;
	printf("Digite a sua senha (apenas num�rica) ");
	scanf("%d", &senha);
	
	do{
    	printf("Confirme sua senha ");
	   	scanf("%d", &senhaComparativo);
		if(senha==senhaComparativo)
			printf("\nSenha criada com sucesso\n");	
		else
			printf("Senha n�o confere, tente novamente!\n");
		tentativas+=1;
	} while(senha!=senhaComparativo && tentativas<4);
	if(senha!=senhaComparativo)
		printf("\nTentativas ultrapassadas\n");	
	
	return 0;
}