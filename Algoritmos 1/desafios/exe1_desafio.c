#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int gen, corOlhos, corCabelo, idade, countMan = 0, porcentMulher = 0, olhosAzuis = 0;
    int populacao = 0, maiorIdade = 0, mediaIdade = 0, totalMulheres = 0;
    int opc;
    
    do {
        gen = 0, corOlhos = 0, corCabelo = 0, idade = 0;

        printf("Pesquisa de caracter�sticas:\n");

        while (gen != 1 && gen != 2) {
            printf("Digite 1 para Masculino ou 2 para Feminino: ");
            scanf("%d", &gen);
        }

        while (corOlhos != 1 && corOlhos != 2 && corOlhos != 3) {
            printf("\nCor dos olhos digite 1 para azuis, 2 para verdes e 3 para castanhos: ");
            scanf("%d", &corOlhos);    
        }

        while (corCabelo != 1 && corCabelo != 2 && corCabelo != 3) {
            printf("\nCor dos cabelos digite 1 para loiros, 2 para castanhos e 3 para pretos: ");
            scanf("%d", &corCabelo);    
        }
            
        while (idade < 1) {
            printf("\nDigite sua idade: ");
            scanf("%d", &idade);
            
            if (idade < 1) {
                printf("\nVoc� digitou um valor incorreto, digite novamente:\n");
            }
        }

        // A) A maior idade entre todos os habitantes
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        // B) A porcentagem de mulheres com idade entre 18 e 35 anos e cabelos castanhos
        if (gen == 2 && corCabelo == 2 && idade >= 18 && idade <= 35) {
            porcentMulher++;
        }

        // C) A m�dia de idade das mulheres
        if (gen == 2) {
            mediaIdade += idade;
            totalMulheres++;
        }

        // D) Quantos homens s�o maiores de 21 anos
        if (gen == 1 && idade >= 21) {
            countMan++;
        }

        // E) Quantos indiv�duos t�m olhos azuis
        if (corOlhos == 1) {
            olhosAzuis++;
        }

        populacao++;
        printf("\nDigite '1' para encerrar o programa ou '2' para cadastrar outra pessoa: ");
        scanf("%d", &opc);

    } while (opc != 1);
    
    // A) A maior idade entre todos os habitantes
    printf("\nA maior idade registrada �: %d anos.", maiorIdade);

    // B) A porcentagem de mulheres com idade entre 18 e 35 anos e cabelos castanhos
    float porcentagemMulheres = (float)porcentMulher / populacao * 100;
    printf("\nA porcentagem de mulheres entre 18 e 35 anos com cabelos castanhos �: %.2f%%.", porcentagemMulheres);

    // C) A m�dia de idade das mulheres
    float mediaIdadeMulheres = totalMulheres > 0 ? (float)mediaIdade / totalMulheres : 0;
    printf("\nA m�dia de idade das mulheres �: %.2f anos.", mediaIdadeMulheres);

    // D) Quantos homens s�o maiores de 21 anos
    printf("\nO n�mero de homens maiores de 21 anos �: %d.", countMan);

    // E) Quantos indiv�duos t�m olhos azuis
    printf("\nO n�mero de indiv�duos com olhos azuis �: %d.\n", olhosAzuis);

    return 0;
}
