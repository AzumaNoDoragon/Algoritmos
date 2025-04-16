#include <stdio.h>
#include <string.h>

int main()
{
	char user[6], senha[7];
	printf("Informe um usuario: ");
	gets(user);
	
	printf("Informe a senha: ");
	gets(senha);
	
	if ((strcmp(user,("Chefe")) == 0) && (strcmp(senha,"123456") == 0)) {
		printf("Login realizado com sucesso! ");
	} else {
		printf("Usuario ou senha invalido! ");
	}
		
	return 0;
}
