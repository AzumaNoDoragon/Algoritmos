#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a a idade do usu�rio. Se ele tiver entre 18 e 
65 anos, apresentar a mensagem: �Voc� � obrigado a votar�. Do 
contr�rio, apresentar a mensagem: �voc� n�o � obrigado a votar�.*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("Digite sua idade para saber se precisa votar: ");
	scanf("%d", &idade);
	
	if (idade>=18 && idade<=65)
		printf("\nVoc� � obrigado a votar!\n");
	else
		printf("\nVoc� n�o � obrigado a votar!\n");
	   	
	return 0;
}