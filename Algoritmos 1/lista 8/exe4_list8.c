#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Fa�a um algoritmo que pe�a o usu�rio e senha. Se o usu�rio for �chefe� 
e a senha for �123456�, ent�o apresentar a mensagem �login realizado�. 
Do contr�rio, apresentar a mensagem �usu�rio e/ou senha incorretos�. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char user[7];
	int	senha;
	const char *user_c = "chefe";
	const int senha_c = 123456;
	
	printf("Login");
	printf("Digite seu usu�rio(minusculo): ");
	gets(user);
	printf("Digite sua senha: ");
	scanf("%d", &senha);
	
	if (strcmp(user, user_c) == 0 && senha == senha_c)
		printf("\nLogin realizado!\n");
	else
		printf("\nUsu�rio e/ou senha incorretos!\n");
	   	
	return 0;
}