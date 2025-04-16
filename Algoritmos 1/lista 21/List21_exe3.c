#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX 10

typedef struct{
	int cod;
	char desc[50], marca[50];
	float preco;
} produto;

int menu();
void create(int i, produto produtos[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	produto produtos[MAX];
	int i, opc, prod;
	
	for(i = 0; i < MAX; i++){
		create(i, produtos);
	}
	
	do{
		opc = menu();
		switch(opc)
		{
		case 1:
			printf("Qual produto deseja alterar: ");
			scanf("%d", &prod);
			if(prod >= 1 && prod <= MAX){
				create(prod - 1, produtos);
				printf("Produto alterado.\n");
			} else {
				printf("produto inválido.\n");
			}
			break;
		case 2:
			for(i = 0; i < MAX; i++){
				printf("\n%dº produto cadastrado, verifique se as informações estão corretas:\n", i + 1);
				printf("Código: %d\n", produtos[i].cod);
				printf("Descrição: %s", produtos[i].desc);
				printf("Marca: %s", produtos[i].marca);
				printf("Preço: %0.2f\n", produtos[i].preco);
			}
			break;
		default:
			if(opc != 0){
				printf("Opção inválida.\n");
			}
			break;
		}
	}while(opc != 0);
	
	printf("Até logo...\n");
	
	return 0;
}

int menu(){
	int opc;
	
	printf("1 - Alterar dados do produto.\n");
	printf("2 - Ver dados do produto.\n");
	printf("0 - Sair.\n");
	printf("O que deseja fazer: ");
	scanf("%d", &opc);
	
	return opc;
}

void create(int i, produto produtos[]){
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