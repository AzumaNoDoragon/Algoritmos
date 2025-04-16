#include <stdio.h>
#include <locale.h>

/*Na universidade temos alunos com diversos perfis: aquele que t�m menos de 21 anos 
e n�o pratica esportes, este n�o tem direito a receber um b�nus na nota; o aluno que pratica esportes e tem 21 
anos ou mais recebe um b�nus de 17% na nota; o aluno que pratica esportes e participa de projetos recebe um 
b�nus de 21% na nota. O programa deve perguntar a nota, utilizar uma estrutura de repeti��o com teste no 
final, do-while, para analisar a nota 0 a 100. O programa em linguagem C deve ser desenvolvido para um n�mero 
indeterminado de alunos com a estrutura de repeti��o while e utilizar a estrutura de sele��o com operadores 
l�gicos para apresentar a m�dia final do aluno, com ou sem b�nus na nota.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota, media, bonus = 0;
	int idade;
	char opc, esporte, projeto;
	
	do{
		printf("Algoritmo para calcular a m�dia do aluno.\n");
		do{
			printf("Digite sua nota(0-100): ");
			scanf("%f", &nota);
			if(nota < 0 || nota > 100){
				printf("\nNota fora do padr�o. Digite um valor de 0 a 100.\n");
			}
		}while(nota < 0 || nota > 100);
		
		printf("Voc� pratica esporte?(s para sim e n para n�o) ");
		scanf(" %c", &esporte);
		
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		
		printf("Voc� participa de algum projeto?(s para sim e n para n�o) ");
		scanf(" %c", &projeto);
		
		if(esporte == 's' || esporte == 'S'){
			if(projeto == 's' || projeto == 'S'){
				bonus = 21;
			} else if(idade >= 21){
				bonus = 17;
			}
		}
		media = nota + (nota * (bonus / 100));
		
		if(media > 100){
			printf("\nSua nota ultrapassa a nota m�xima, sendo assim ela ser� arredondada.");
			media = 100;
		}
		
		printf("\nSua nota � %0.2f, com seu perfil, voc� teve %0.0f%% de bonus, logo sua m�dia � %0.2f!\n", nota, bonus, media);
		
		printf("\nDeseja verificar a m�dia de outro aluno? (s para sim e n para n�o) ");
		scanf(" %c", &opc);
	}while(opc != 'n' && opc != 'N');
	
	printf("\nBye bye.\n");
	
	return 0;
}