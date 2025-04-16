#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Uma pesquisa realizada na UTFPR, campus Cornélio Procópio, visa identificar o perfil do aluno, 
em relação ao tempo gasto para estudar antes da prova. Para isto, é necessário coletar alguns dados:
- gênero (Masculino ou Feminino); - quantidade de matérias que estão sendo cursadas; - qual a matéria 
considerada a mais difícil e/ou complicada de entendimento; e a idade. O programa deve ser executado para o 
número total de alunos informados pelo usuário. O programa em linguagem C deve calcular e apresentar: a) o 
aluno mais novo da pesquisa; b) a média de idade dos alunos do gênero Masculino, com a idade está entre 18 e 
35 anos, que considere a disciplina de Algoritmos 1 mais difícil e; c) a porcentagem dos alunos do gênero 
Feminino,  que cursam a disciplina de Algoritmos 1.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,  gen,  materias, totalAlunos;
	int maisDif = 0, idadeMasc = 0, femAlg = 0, genMasc = 0, genFem = 0, idade = 0, menorIdade = 200;
	char disc[25], alg;
	
	printf("Digite quantos alunos participarão da pesquisa: ");
    scanf("%d", &totalAlunos);
    
	for(i = 0; i < totalAlunos; i++){
		gen = 0;
		printf("Pesquisa UTFPR, com o %d aluno.\n", i+1);
		while(gen != 1 && gen != 2){
			printf("Digite seu gênero: (1 para Masculino e 2 para Feminino) ");
			scanf("%d", &gen);
			
			if(gen == 1){
				genMasc++;
			} else if(gen == 2){
				genFem++;
			} else{
				printf("\nValor Invalido, digite novamente.\n");
			}
		}
		
		printf("\nQuantas máterias está cursando este semestre: ");
		scanf("%d", &materias);
		
		printf("\nDigite a matéria que considerada a mais difícil e/ou complicada de entendimento: ");
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
		
		printf("\nVocê cursa a disciplina de Algoritmos 1?(s para sim e n para não) ");
		scanf(" %c", &alg);
		
		if(gen == 2 && (alg == 's' || alg == 'S')){
			femAlg++;
		}
	}
	
	printf("\nO aluno mais novo na pesquisa tem %d anos!", menorIdade);
	if(maisDif > 0){
		printf("\nA idade média dos alunos do gênero Masculino, com a idade está entre 18 e 35 anos, que considere a disciplina de Algoritmos 1 mais difícil é %0.2f", (float)idadeMasc / (float)maisDif);
	} else {
		printf("\nNão tiveram alunos do gênero Masculino, com a idade está entre 18 e 35 anos, que considere a disciplina de Algoritmos 1 mais difícil, ou que responderam este formulario");
	}
	if (genFem > 0) {
    	printf("\nA porcentagem das alunas do gênero Feminino que cursam a disciplina de Algoritmos 1 é de %0.2f%%", ((float)femAlg / (float)genFem) * 100);
	} else {
    	printf("\nNenhuma aluna do gênero Feminino respondeu o questionário ou não cursam Algoritmos 1.\n");
	}

	printf("\nBye bye.\n");
	
	return 0;
}