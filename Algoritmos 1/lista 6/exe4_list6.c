#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a uma senha (apenas num�rica). Se a senha for 
diferente de 123456, apresentar a mensagem �senha n�o confere!�. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int senha, senha_tentativa;
	senha = 123456;
	
	printf("Digite a senha: ");
	scanf("%d", &senha_tentativa);
	
	if (senha_tentativa==senha)
		printf("\nAcesso Garantido!!!\n");
	else
		printf("\nSenha n�o confere!\n");
	
	return 0;
}