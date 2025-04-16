#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc;
	
	printf("Escolha o mês para saber quantos dias o mesmo possui: ");
	scanf("%d", &opc);
	
	switch(opc) {
        case 1:
            printf("\nJaneiro possui 31 dias.\n");
            break;
        case 2:
            printf("\nFevereiro geralmente possui 28 dias, ou 29 dias em anos bissextos.\n");
            break;
        case 3:
            printf("\nMarço possui 31 dias.\n");
            break;
        case 4:
            printf("\nAbril possui 30 dias.\n");
            break;
        case 5:
            printf("\nMaio possui 31 dias.\n");
            break;
        case 6:
            printf("\nJunho possui 30 dias.\n");
            break;
        case 7:
            printf("\nJulho possui 31 dias.\n");
            break;
        case 8:
            printf("\nAgosto possui 31 dias.\n");
            break;
        case 9:
            printf("\nSetembro possui 30 dias.\n");
            break;
        case 10:
            printf("\nOutubro possui 31 dias.\n");
            break;
        case 11:
            printf("\nNovembro possui 30 dias.\n");
            break;
        case 12:
            printf("\nDezembro possui 31 dias.\n");
            break;
        default:
            printf("\nMês inválido! Digite um número entre 1 e 12.\n");
            break;
    }
	
	return 0;
}