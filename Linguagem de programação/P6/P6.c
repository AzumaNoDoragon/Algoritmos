/*
Criar uma estrutura chamada "turma", que deve conter os itens "placa" (que deve ser uma string de 8 posi��es),
o item "numero_de_alunos" (um valor do tipo float) e o item "soma_das_notas" (um valor do tipo float)
Criar uma vari�vel do tipo "turma", dentro da fun��o principal "main()"Atribua o valor "AS31" ao item
"turma" da estrutura, o valor 38 ao item "numero_de_alunos" da estrutura e o valor 370 ao item "soma_das_notas"
da estrutura;
Crie uma fun��o do tipo float que fa�a a divis�o da "soma_das_notas" pelo "numero_de_alunos" e retorne o
resultado � fun��o principal "main()". Use passagem de par�metros por valor.
Imprima na tela o valor obtido (fa�a o printf dentro da fun��o "main()")*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

struct turma
{
	char placa[8];
	float numero_de_alunos, soma_das_notas;
};

float divisao(float a, float b)
{
	return (b / a);
}

int main()
{
	setlocale(LC_ALL, "");

	struct turma AS31;

	strcpy(AS31.placa, "AS31");
	AS31.numero_de_alunos = 38;
	AS31.soma_das_notas = 370;

	printf("O resultado da divis�o das notas da turma %s � %.2f!\n", AS31.placa,
		   divisao(AS31.numero_de_alunos, AS31.soma_das_notas));

	return 0;
}
