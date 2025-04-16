#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Faça um algoritmo que peça o usuário e senha. Se o usuário for “chefe” 
e a senha for “123456”, então apresentar a mensagem “login realizado”. 
Do contrário, apresentar a mensagem “usuário e/ou senha incorretos”. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char user[7];
	int	senha;
	const char *user_c = "chefe";
	const int senha_c = 123456;
	
	printf("Login");
	printf("Digite seu usuário(minusculo): ");
	gets(user);
	printf("Digite sua senha: ");
	scanf("%d", &senha);
	
	if (strcmp(user, user_c) == 0 && senha == senha_c)
		printf("\nLogin realizado!\n");
	else
		printf("\nUsuário e/ou senha incorretos!\n");
	   	
	return 0;
}