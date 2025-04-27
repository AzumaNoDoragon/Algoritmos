/*Escreva um programa que receba duas notas de um aluno (float), calcule e mostre a média aritmética
e a mensagem que se encontra na tabela a seguir. A bolinha preta significa inclusive*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, soma;
	
	printf("Para saber a situação do aluno\n");
	printf("Digite as notas separadas por enter\n");
	scanf("%f%f",&n1,&n2);
	
	soma = (n1 + n2) / 2;
	
	printf("A nota foi %.1f, o aluno está ",soma);
	if ((soma >= 0) && (soma < 3)){
		printf("reprovado.\n");
		}
	if ((soma >= 3) && (soma < 7)){
		printf("em exame.\n");
		}
	if ((soma >= 7) && (soma <= 10)){
		printf("aprovado.\n");
	}	
			
	return 0;
}