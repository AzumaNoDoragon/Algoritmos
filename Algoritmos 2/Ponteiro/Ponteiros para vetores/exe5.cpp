#include <stdio.h>
#include <stdlib.h>

void qtdProvas(int *i);
void pegaNota(float *p);
void calcNota(float *p, int qtd, float *media);
void apresentar(float media);

int main(int argc, char** argv)
{
	float *p, media = 0;
	int qtd, i;
	
	qtdProvas(&qtd);
	
	p = (float*)malloc(qtd * sizeof(float));
	
	for(i = 0; i < qtd; i++){
		pegaNota(p + i);
	}
	
	calcNota(p, qtd, &media);
	apresentar(media);
	
	free(p);
	return 0;
}

void qtdProvas(int *i){
    printf("Digite a quantidade de provas que voce teve, para podermos calcular a media: ");
    scanf("%d", i);
}

void pegaNota(float *p){
    float flag;
    do{
        printf("Digite sua nota: ");
        scanf("%f", &flag);
        if(flag >= 0 && flag <= 10){
            *p = flag;
        } else {
            printf("Valor invalido, digite novamente.\n");
        }
    }while(flag < 0 || flag > 10);
}

void calcNota(float *p, int qtd, float *media){
    int i;
    for(i = 0; i < qtd; i++){
        *media += *(p + i);
    }
    *media = *media / qtd;
}

void apresentar(float media){
	printf("\n\nA media das notas informadas e: %0.1f\n\n", media);
}