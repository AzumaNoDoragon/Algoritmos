/*
Faça um algoritmo que tenha um registro (estrutura) de monstro de 
bolso (como do exercício anterior) e um registro (estrutura) de treinador. Este 
último deve ter os campos nome, idade e número de insígnias. O usuário deve 
digitar os valores para os campos de um monstrinho e os valores dos campos 
de um treinador. Em seguida, o algoritmo deve apresentar os valores de 
ambos na tela.
*/

#include <stdio.h>

struct monstro{
	char nome[20];
	int vida, ataque, defesa;
	
	void setNome(){
		printf("Digite o nome do pokemon: ");
		fflush(stdin);
		gets(nome);
	}
	
	void setVida(){
		printf("Digite o vida: ");
		scanf("%d", &vida);
	}
	
	void setAtaque(){
		printf("Digite a ataque: ");
		scanf("%d", &ataque);
	}
	
	void setDefesa(){
		printf("Digite a defesa: ");
		scanf("%d", &defesa);
	}
	
	void apresentar(){
		printf("\nO nome do monstro e %s, sua vida e %d, ataque %d e defesa %d\n\n", nome, vida, ataque, defesa);
	}
};

struct treinador{
	char nome[20];
	int idade, qtdInsignias;
	
	void setNome(){
		printf("Digite o nome do treinador: ");
		fflush(stdin);
		gets(nome);
	}
	
	void setIdade(){
		printf("Digite a idade: ");
		scanf("%d", &idade);
	}
	
	void setQtdInsignias(){
		printf("Digite a quantidade de insignias: ");
		scanf("%d", &qtdInsignias);
	}
	
	void apresentar(){
		printf("\nO nome do treinador e %s, tem %d anos e %d insignias.\n\n", nome, idade, qtdInsignias);
	}
};

int main(int argc, char** argv)
{
	monstro pok[25];
	treinador ash[5];
	int i = 0, j = 0, k = 2, l = 2;
	
	for(i = i; i != l; i++){
		ash[i].setNome();
		ash[i].setIdade();
		ash[i].setQtdInsignias();
		for(j = j; j != k; j++){
			pok[j].setNome();
			pok[j].setVida();
			pok[j].setAtaque();
			pok[j].setDefesa();
		}
		k += k;
	}
	
	j = 0;
	for(i = 0; i != l; i++){
		ash[i].apresentar();
		for(j = j; j != k; j++){
			pok[j].apresentar();
		}
		k += 4;
		printf("*************************");
	}
	
	return 0;
}