#include <stdio.h>
#include <locale.h>

/*Na universidade temos alunos com diversos perfis: aquele que têm menos de 21 anos 
e não pratica esportes, este não tem direito a receber um bônus na nota; o aluno que pratica esportes e tem 21 
anos ou mais recebe um bônus de 17% na nota; o aluno que pratica esportes e participa de projetos recebe um 
bônus de 21% na nota. O programa deve perguntar a nota, utilizar uma estrutura de repetição com teste no 
final, do-while, para analisar a nota 0 a 100. O programa em linguagem C deve ser desenvolvido para um número 
indeterminado de alunos com a estrutura de repetição while e utilizar a estrutura de seleção com operadores 
lógicos para apresentar a média final do aluno, com ou sem bônus na nota.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota, media, bonus = 0;
	int idade;
	char opc, esporte, projeto;
	
	do{
		printf("Algoritmo para calcular a média do aluno.\n");
		do{
			printf("Digite sua nota(0-100): ");
			scanf("%f", &nota);
			if(nota < 0 || nota > 100){
				printf("\nNota fora do padrão. Digite um valor de 0 a 100.\n");
			}
		}while(nota < 0 || nota > 100);
		
		printf("Você pratica esporte?(s para sim e n para não) ");
		scanf(" %c", &esporte);
		
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		
		printf("Você participa de algum projeto?(s para sim e n para não) ");
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
			printf("\nSua nota ultrapassa a nota máxima, sendo assim ela será arredondada.");
			media = 100;
		}
		
		printf("\nSua nota é %0.2f, com seu perfil, você teve %0.0f%% de bonus, logo sua média é %0.2f!\n", nota, bonus, media);
		
		printf("\nDeseja verificar a média de outro aluno? (s para sim e n para não) ");
		scanf(" %c", &opc);
	}while(opc != 'n' && opc != 'N');
	
	printf("\nBye bye.\n");
	
	return 0;
}