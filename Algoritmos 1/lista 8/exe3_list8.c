#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça a idade do usuário. Se ele tiver entre 18 e 
65 anos, apresentar a mensagem: “Você é obrigado a votar”. Do 
contrário, apresentar a mensagem: “você não é obrigado a votar”.*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("Digite sua idade para saber se precisa votar: ");
	scanf("%d", &idade);
	
	if (idade>=18 && idade<=65)
		printf("\nVocê é obrigado a votar!\n");
	else
		printf("\nVocê não é obrigado a votar!\n");
	   	
	return 0;
}