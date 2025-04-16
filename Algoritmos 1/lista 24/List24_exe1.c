#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

int menu();
void menuBio();
void menuGeo();
void pergBio(int opc);
void bioPerg1();
void bioPerg2();
void pergGeo(int opc);
void geoPerg1();
void geoPerg2();
void cor();
void err();
void cls();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc;
	
	do{
		opc = menu();
		switch(opc)
		{
		case 1:
			menuBio();
			break;
		case 2:
			menuGeo();
			break;
		case 0:
			printf("Até Logo...");
			break;
		default:
			printf("Número Incorreto. Tente novamente.");
			break;
		}
	}while(opc != 0);
	
	return 0;
}

int menu(){
	int opc;
	
	printf("O que quer estudar? \n");
	printf("1 - Biologia.\n");
	printf("2 - Geografia.\n");
	printf("0 - Sair.\n");
	printf("Digite o que deseja fazer: ");
	scanf("%d", &opc);
	cls();
	
	return opc;
}

void menuBio(){
	int opc;
	
	printf("O que quer estudar? \n");
	printf("1 - Exercitar sobre artrópodes.\n");
	printf("2 - Exercitar sobre vertebrados.\n");
	printf("0 - Voltar.\n");
	printf("Digite o que deseja fazer: ");
	scanf("%d", &opc);
	cls();
	
	pergBio(opc);
}

void pergBio(int opc){
	switch(opc){
		case 1:
			bioPerg1();
			break;
		case 2:
			bioPerg2();
			break;
		case 0:
			cls();
			printf("Voltando para o menu inicial...");
			Sleep(1000);
			cls();
			break;
		default:
			printf("Número Incorreto. Tente novamente.");
	}
}

void bioPerg1(){
	int resp;
	
	printf("Quantas patas tem um inseto? ");
	do{
		scanf("%d", &resp);
		if(resp == 6){
			cor();
			menuBio();
		} else {
			err();
			printf("Tente novamente: ");
		}
	}while(resp != 6);
	
}

void bioPerg2(){
	int resp;
	
	printf("1 - Mamífero.\n");
	printf("2 - Réptil.\n");
	printf("3 - Ave.\n");
	printf("4 - Molusco.\n");
	printf("Qual destes animais não pertence aos vertebrados: ");
	
	do{
		scanf("%d", &resp);
		if(resp > 0 && resp < 5){
			if(resp == 4){
				cor();
				menuBio();
			} else {
				err();
				printf("Tente novamente: ");
			}
		} else {
			printf("Número invalido! Tente novamente: ");
		}
	}while(resp != 4);
}

void menuGeo(){
	int opc;
	
	printf("O que quer estudar? \n");
	printf("1 - Exercitar sobre países.\n");
	printf("2 - exercitar sobre continentes.\n");
	printf("0 - Voltar.\n");
	printf("Digite o que deseja fazer: ");
	scanf("%d", &opc);
	cls();
	
	pergGeo(opc);
}

void pergGeo(int opc){
	switch(opc){
		case 1:
			geoPerg1();
			break;
		case 2:
			geoPerg2();
			break;
		case 0:
			cls();
			printf("Voltando para o menu inicial...");
			Sleep(1000);
			cls();
			break;
		default:
			printf("Número Incorreto. Tente novamente.");
			break;
	}
}

void geoPerg1(){
	int resp;
	
	printf("1 - Colômbia.\n");
	printf("2 - Chile.\n");
	printf("3 - Venezuela.\n");
	printf("qual destes países não faz fronteira com o Brasil: ");
	
	do{
		scanf("%d", &resp);
		if(resp > 0 && resp < 4){
			if(resp == 2){
				cor();
				menuGeo();
			} else {
				err();
				printf("Tente novamente: ");
			}
		} else {
			printf("Número invalido! Tente novamente: ");
		}
	}while(resp != 2);
}

void geoPerg2(){
	int resp;
	
	printf("1 - Ásia.\n");
	printf("2 - África.\n");
	printf("3 - Atlântida.\n");
	printf("Qual destes não é um continente: ");
	
	do{
		scanf("%d", &resp);
		if(resp > 0 && resp < 4){
			if(resp == 3){
				cor();
				menuGeo();
			} else {
				err();
				printf("Tente novamente: ");
			}
		} else {
			printf("Número invalido! Tente novamente: ");
		}
	}while(resp != 3);
}

void cor(){
	printf("Correto.\n");
	Sleep(2000);
	cls();
}

void err(){
	printf("Errado.\n");
}

void cls(){
	system("cls");
}