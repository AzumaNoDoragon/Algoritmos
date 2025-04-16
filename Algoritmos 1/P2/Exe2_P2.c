#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Uma pesquisa realizada na UTFPR, campus Corn�lio Proc�pio, visa identificar o perfil do aluno, 
em rela��o ao tempo gasto para estudar antes da prova. Para isto, � necess�rio coletar alguns dados:
- g�nero (Masculino ou Feminino); - quantidade de mat�rias que est�o sendo cursadas; - qual a mat�ria 
considerada a mais dif�cil e/ou complicada de entendimento; e a idade. O programa deve ser executado para o 
n�mero total de alunos informados pelo usu�rio. O programa em linguagem C deve calcular e apresentar: a) o 
aluno mais novo da pesquisa; b) a m�dia de idade dos alunos do g�nero Masculino, com a idade est� entre 18 e 
35 anos, que considere a disciplina de Algoritmos 1 mais dif�cil e; c) a porcentagem dos alunos do g�nero 
Feminino,  que cursam a disciplina de Algoritmos 1.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,  gen,  materias, totalAlunos;
	int maisDif = 0, idadeMasc = 0, femAlg = 0, genMasc = 0, genFem = 0, idade = 0, menorIdade = 200;
	char disc[25], alg;
	
	printf("Digite quantos alunos participar�o da pesquisa: ");
    scanf("%d", &totalAlunos);
    
	for(i = 0; i < totalAlunos; i++){
		gen = 0;
		printf("Pesquisa UTFPR, com o %d aluno.\n", i+1);
		while(gen != 1 && gen != 2){
			printf("Digite seu g�nero: (1 para Masculino e 2 para Feminino) ");
			scanf("%d", &gen);
			
			if(gen == 1){
				genMasc++;
			} else if(gen == 2){
				genFem++;
			} else{
				printf("\nValor Invalido, digite novamente.\n");
			}
		}
		
		printf("\nQuantas m�terias est� cursando este semestre: ");
		scanf("%d", &materias);
		
		printf("\nDigite a mat�ria que considerada a mais dif�cil e/ou complicada de entendimento: ");
		fflush(stdin);
		gets(disc);
		fflush(stdin);
		
		printf("\nDigite sua idade: ");
		scanf("%d", &idade);
		
		if(idade < menorIdade){
			menorIdade = idade;
		}
		
		if(gen == 1 && idade >= 18 && idade <= 35 && (strcmp(disc, "Algoritmos 1") == 0)){
			maisDif++;
			idadeMasc = idadeMasc + idade;
		}
		
		printf("\nVoc� cursa a disciplina de Algoritmos 1?(s para sim e n para n�o) ");
		scanf(" %c", &alg);
		
		if(gen == 2 && (alg == 's' || alg == 'S')){
			femAlg++;
		}
	}
	
	printf("\nO aluno mais novo na pesquisa tem %d anos!", menorIdade);
	if(maisDif > 0){
		printf("\nA idade m�dia dos alunos do g�nero Masculino, com a idade est� entre 18 e 35 anos, que considere a disciplina de Algoritmos 1 mais dif�cil � %0.2f", (float)idadeMasc / (float)maisDif);
	} else {
		printf("\nN�o tiveram alunos do g�nero Masculino, com a idade est� entre 18 e 35 anos, que considere a disciplina de Algoritmos 1 mais dif�cil, ou que responderam este formulario");
	}
	if (genFem > 0) {
    	printf("\nA porcentagem das alunas do g�nero Feminino que cursam a disciplina de Algoritmos 1 � de %0.2f%%", ((float)femAlg / (float)genFem) * 100);
	} else {
    	printf("\nNenhuma aluna do g�nero Feminino respondeu o question�rio ou n�o cursam Algoritmos 1.\n");
	}

	printf("\nBye bye.\n");
	
	return 0;
}