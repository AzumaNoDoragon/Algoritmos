#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a o semestre em que est� cursando a faculdade. 
a. Se estiver no s�timo per�odo ou superior, o algoritmo deve apresentar o menu:
1-matricular na disciplina de Jogos Digitais; 2-Matricular na disciplina de Design
de Jogos; 3-Matricular na disciplina de Realidade Virtual.
	i. Se a op��o for 1, apresentar a mensagem: �Jogos Digitais confirmado�;
	ii. Se a op��o for 2, apresentar a mensagem: �Design confirmado�;
	iii. Se a op��o for 3, apresentar a mensagem: �RV confirmado�.
b. Caso n�o esteja pelo menos no s�timo per�odo, apresentar a mensagem: 
�Voc� ainda n�o pode se matricular em disciplinas optativas�. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int semestre, escolha;
	
	printf("Digite em qual semestre voc� est�: ");
	scanf("%d", &semestre);
	
	if (semestre >= 7){
		printf("\n1-matricular na disciplina de Jogos Digitais;");
		printf("\n2-Matricular na disciplina de Design de Jogos;");
		printf("\n3-Matricular na disciplina de Realidade Virtual\n");
		printf("\nEm qual das materias voc� deseja se matricular:");
		scanf("%d", &escolha);
		if(escolha==1)
			printf("\nJogos Digitais confirmado!\n");
		else if(escolha==2)
			printf("\nDesign confirmado!\n");
		else if(escolha==3)
			printf("\nRV confirmado!\n");
		else
			printf("\nD�gito incorreto.\n");		
	}
	else
		printf("\nVoc� ainda n�o pode se matricular em disciplinas optativas.\n");
	
	return 0;
}