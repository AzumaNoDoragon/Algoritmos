#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX 10

typedef struct{
	int cod;
	char desc[50], marca[50];
	float preco;
} produto;

int main(){
	setlocale(LC_ALL, "Portuguese");
	produto produtos[MAX];
	int i;
	
	for(i = 0; i < MAX; i++){
		printf("Vamos cadastrar o %dº produto:\n", i + 1);
		printf("Digite o codigo: ");
		scanf("%d", &produtos[i].cod);
		printf("Digite a descrição: ");
		getchar();
		fgets(produtos[i].desc, sizeof(produtos[i].desc), stdin);
		printf("Digite a marca: ");
		fgets(produtos[i].marca, sizeof(produtos[i].marca), stdin);
		printf("Digite o preço: ");
		scanf("%f", &produtos[i].preco);
		printf("\n");
	}
	
	for(i = 0; i < MAX; i++){
		printf("\n%dº produto cadastrado, verifique se as informações estão corretas:\n", i + 1);
		printf("Código: %d\n", produtos[i].cod);
		printf("Descrição: %s", produtos[i].desc);
		printf("Marca: %s", produtos[i].marca);
		printf("Preço: %0.2f\n", produtos[i].preco);
	}
	
	return 0;
}