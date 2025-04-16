#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça uma senha (apenas numérica). Se a senha for 
diferente de 123456, apresentar a mensagem “senha não confere!”. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int senha, senha_tentativa;
	senha = 123456;
	
	printf("Digite a senha: ");
	scanf("%d", &senha_tentativa);
	
	if (senha_tentativa==senha)
		printf("\nAcesso Garantido!!!\n");
	else
		printf("\nSenha não confere!\n");
	
	return 0;
}