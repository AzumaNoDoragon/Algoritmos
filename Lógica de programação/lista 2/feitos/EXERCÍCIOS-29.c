/*Escreva um programa que receba quatro notas de um aluno (float), calcule e mostre a m�dia aritm�tica
das notas e a mensagem de aprovado ou reprovado, considerando para aprova��o m�dia igual ou
maior que 7.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float na, n1, n2, n3, n4;
	
	printf("Para que seja calculado a nota aritm�tica de um aluno\n");
	printf("Digite as 4 notas separadas por enter\n");
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

	na = (n1 + n2 + n3 + n4) / 4; 	
	
	printf("\nA nota foi %.2f, sendo assim, ",na);
	if (na >= 7)
		printf("aluno aprovado.\n");
		else{
			printf("aluno reprovado.\n");	
		}

	return 0;
}