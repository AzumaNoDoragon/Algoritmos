#include <stdio.h>

int main()
{
	int senha1, senha2, count = 3;
	
	printf("Digite uma senha numerica: ");
	scanf("%d", &senha1);
	
	do{
		printf("\nConfirme a senha: ");
		scanf("%d", &senha2);
		
		count--;
		
		if(senha1==senha2) {
			printf("\nSenha Correta!\n");
		} else if (count == 0) {
			printf("\nAcabaram as tentativas!\n");
		} else {
			printf("\nVoce ainda tem %d tentativas!\n", count);
		}
	}while(senha2!=senha1 && count > 0);
	
	return 0;
}