/*
1- Fa�a um programa que:
-Tenha uma estrutura para produto com:
-nome (vetor de char de 10 characteres)
-preco (float)
-C�digo (int)

O programa deve:
-Pedir para que o usu�rio digite os valores do nome, preco e c�digo.
-Apresente os valores na tela.

-Fa�a a tabela com a representa��o das vari�veis.
*/

#include <stdio.h>
#include <string.h>

struct Produto{
	char nome[10];
	float preco;
	int codigo;
};

int main(int argc, char** argv)
{
	Produto p;
	
	printf("Digite o nome do produto: ");
	gets(p.nome);
	printf("Digite o valor do produto: ");
	scanf("%f", &p.preco);
	printf("Digite o codigo do produto: ");
	scanf("%d", &p.codigo);
	
	printf("Nome: %s", p.nome);
	printf("\nPreco: %0.2f", p.preco);
	printf("\nCodigo: %d\n", p.codigo);
	
	return 0;
}
	
/*

| VARIAVEL | ENDERECO | VALOR  |
| p.nome   | 0055FF20 |  User  |
| p.preco  | 0055FF16 |  User  |
| p.codigo | 0055FF12 |  User  |

*/