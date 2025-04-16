#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
	int cod;
	char desc[50], marca[50];
	float preco;
} produto;

int main(){
	setlocale(LC_ALL, "Portuguese");
	produto produtos;
	
	printf("Vamos cadastrar o produto:\n");
	printf("Digite o codigo: ");
	scanf("%d", &produtos.cod);
	printf("Digite a descri��o: ");
	getchar();
	fgets(produtos.desc, sizeof(produtos.desc), stdin);
	printf("Digite a marca: ");
	fgets(produtos.marca, sizeof(produtos.marca), stdin);
	printf("Digite o pre�o: ");
	scanf("%f", &produtos.preco);
	
	printf("\nProduto cadastrado, verifique se as informa��es est�o corretas:\n");
	printf("C�digo: %d\n", produtos.cod);
	printf("Descri��o: %s", produtos.desc);
	printf("Marca: %s", produtos.marca);
	printf("Pre�o: %0.2f\n", produtos.preco);
	
	return 0;
}