#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça o semestre em que está cursando a faculdade. 
a. Se estiver no sétimo período ou superior, o algoritmo deve apresentar o menu:
1-matricular na disciplina de Jogos Digitais; 2-Matricular na disciplina de Design
de Jogos; 3-Matricular na disciplina de Realidade Virtual.
	i. Se a opção for 1, apresentar a mensagem: “Jogos Digitais confirmado”;
	ii. Se a opção for 2, apresentar a mensagem: “Design confirmado”;
	iii. Se a opção for 3, apresentar a mensagem: “RV confirmado”.
b. Caso não esteja pelo menos no sétimo período, apresentar a mensagem: 
“Você ainda não pode se matricular em disciplinas optativas”. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int semestre, escolha;
	
	printf("Digite em qual semestre você está: ");
	scanf("%d", &semestre);
	
	if (semestre >= 7){
		printf("\n1-matricular na disciplina de Jogos Digitais;");
		printf("\n2-Matricular na disciplina de Design de Jogos;");
		printf("\n3-Matricular na disciplina de Realidade Virtual\n");
		printf("\nEm qual das materias você deseja se matricular:");
		scanf("%d", &escolha);
		if(escolha==1)
			printf("\nJogos Digitais confirmado!\n");
		else if(escolha==2)
			printf("\nDesign confirmado!\n");
		else if(escolha==3)
			printf("\nRV confirmado!\n");
		else
			printf("\nDígito incorreto.\n");		
	}
	else
		printf("\nVocê ainda não pode se matricular em disciplinas optativas.\n");
	
	return 0;
}