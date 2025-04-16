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
				printf("produto inv�lido.\n");
			}
			break;
		case 2:
			for(i = 0; i < MAX; i++){
				printf("\n%d� produto cadastrado, verifique se as informa��es est�o corretas:\n", i + 1);
				printf("C�digo: %d\n", produtos[i].cod);
				printf("Descri��o: %s", produtos[i].desc);
				printf("Marca: %s", produtos[i].marca);
				printf("Pre�o: %0.2f\n", produtos[i].preco);
			}
			break;
		default:
			if(opc != 0){
				printf("Op��o inv�lida.\n");
			}
			break;
		}
	}while(opc != 0);
	
	printf("At� logo...\n");
	
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
	printf("Vamos cadastrar o %d� produto:\n", i + 1);
	printf("Digite o codigo: ");
	scanf("%d", &produtos[i].cod);
	printf("Digite a descri��o: ");
	getchar();
	fgets(produtos[i].desc, sizeof(produtos[i].desc), stdin);
	printf("Digite a marca: ");
	fgets(produtos[i].marca, sizeof(produtos[i].marca), stdin);
	printf("Digite o pre�o: ");
	scanf("%f", &produtos[i].preco);
	printf("\n");
}