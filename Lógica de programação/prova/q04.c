/* 
Nome Gabriel Santos Afini da Silva
RA 2267284 
---------------------------------------------------------------------------------------------
Questão 04
Escreva um programa que receba quatro notas de um aluno (float), calcule e mostre 
a média aritmética das notas e a mensagem de aprovado ou reprovado, considerando 
para aprovação média igual ou maior que 7. 
---------------------------------------------------------------------------------------------
Detalhamento
	Entradas de dados:
	nota 1, nota 2, nota 3, nota 4		
	
	Saídas de dados: 
	Nota aritmética
	Aluno aprovado
	Aluno reprovado
	
	Processamento
	Obter nota 1, nota 2, nota 3, nota 4
	Nota aritmética = nota 1 + nota 2 + nota 3 + nota 4 ÷ 4
		Se soma maior ou igual a 7, escreva aluno aprovado, se não, escreva aluno reprovado
*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float na, n1, n2, n3, n4;
	
	printf("Para que seja calculado a nota aritmética de um aluno\n");
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