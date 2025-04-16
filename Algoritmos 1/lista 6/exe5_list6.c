#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça uma senha (apenas numérica). Em seguida, o
algoritmo deve pedir a confirmação da senha. Se a senha repetida for igual
à original, apresentar a mensagem “Senha criada com sucesso”. Do
contrário, apresentar a mensagem “senha não confere”.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int senha, senhaComparativo, tentativas;
	tentativas = 1;
	printf("Digite a sua senha (apenas numérica) ");
	scanf("%d", &senha);
	
	do{
    	printf("Confirme sua senha ");
	   	scanf("%d", &senhaComparativo);
		if(senha==senhaComparativo)
			printf("\nSenha criada com sucesso\n");	
		else
			printf("Senha não confere, tente novamente!\n");
		tentativas+=1;
	} while(senha!=senhaComparativo && tentativas<4);
	if(senha!=senhaComparativo)
		printf("\nTentativas ultrapassadas\n");	
	
	return 0;
}