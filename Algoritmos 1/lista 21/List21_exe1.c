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
	printf("Digite a descrição: ");
	getchar();
	fgets(produtos.desc, sizeof(produtos.desc), stdin);
	printf("Digite a marca: ");
	fgets(produtos.marca, sizeof(produtos.marca), stdin);
	printf("Digite o preço: ");
	scanf("%f", &produtos.preco);
	
	printf("\nProduto cadastrado, verifique se as informações estão corretas:\n");
	printf("Código: %d\n", produtos.cod);
	printf("Descrição: %s", produtos.desc);
	printf("Marca: %s", produtos.marca);
	printf("Preço: %0.2f\n", produtos.preco);
	
	return 0;
}