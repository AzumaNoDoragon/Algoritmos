#include <stdio.h>
#include <locale.h>

/*Imagine um parque infantil. Faça um algoritmo que peça a altura do usuário e a 
idade. 
a. Se tiver altura menor que 1,6m, pode entrar no parque. Neste caso: 
	i. Se tiver menos de 5 anos, escreva a mensagem: “Pode brincar no pula-pula e Casinha”; 
	ii.Se tiver entre 5 e 8 anos, escreva a mensagem: “Pode brincar na prancha do pirata e piscina de bolinhas”. 
	iii. Se tiver mais de 8 anos, escreva a mensagem: “Pode brincar de pebolim, ping-pong e basquete”.  
b. Se tiver altura maior ou igual a 1,6m, escreva a mensagem: “Você é muito grande para entrar no parque”. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float alt;
	int idade;
	
	printf("Digite as suas informções\n");
	printf("Digite sua altura: ");
	scanf("%f", &alt);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (alt < 1.6)
		if (idade < 5)
			printf("\nPode brincar no pula-pula e Casinha!\n");
		else if (idade >= 5 && idade < 8)
			printf("\nPode brincar na prancha do pirata e piscina de bolinhas!\n");
		else
			printf("\nPode brincar de pebolim, ping-pong e basquete!\n");
	else
		printf("\nVocê é muito grande para entrar no parque!\n");
	
	return 0;
}