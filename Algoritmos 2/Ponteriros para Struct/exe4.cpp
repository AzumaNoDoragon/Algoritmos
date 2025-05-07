/*
4-Fa�a um programa que:

-Tenha uma estrutura para produto com:
-nome (vetor de char de 10 characteres)
-preco (float)
-C�digo (int)

O programa deve ter um ponteiro que deve apontar para um espa�o alocado dinamicamente.

O programa deve pedir e apresentar o mesmo que no exerc�cio anterior. Use a nota��o SIMPLIFICADA.

-Fa�a a tabela com a representa��o das vari�veis.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto{
	char nome[10];
	float preco;
	int codigo;
};

int main(int argc, char** argv)
{
	Produto *p;
	
	p = (Produto*)malloc(sizeof(Produto));
	
	printf("Digite o nome do produto: ");
	gets(p->nome);
	printf("Digite o valor do produto: ");
	scanf("%f", &p->preco);
	printf("Digite o codigo do produto: ");
	scanf("%d", &p->codigo);
	
	printf("Nome: %s", p->nome);
	printf("\nPreco: %0.2f", p->preco);
	printf("\nCodigo: %d\n", p->codigo);
	
	free(p);
	return 0;
}

/*

| VARIAVEL  | ENDERECO |  VALOR   |
| p.nome    | 0055FF20 |   USER   |
| p.preco   | 0055FF16 |   USER   |
| p.codigo  | 0055FF12 |   USER   |
| *p        | HEAP     | 0055FF20 |

*/