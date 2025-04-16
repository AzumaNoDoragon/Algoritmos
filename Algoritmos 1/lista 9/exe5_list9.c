#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que apresente o menu: “1-Conversão de temperatura; 2
Conversão de distância”. Se o usuário escolher a opção 1, apresentar o menu: “1
Converter Celsius para Farenheit; 2-Converter Farenheit para Celsius; 3-Converter 
Celsius para Kelvin”. O algoritmo deverá, então, pedir uma temperatura, realizar a 
conversão escolhida e apresentar a mensagem com o valor convertido.  
Por outro lado, se o usuário escolher a conversão de distância (opção 2 do primeiro 
menu), então, apresentar o menu: “1-Converter km para milhas; 2-Converter milhas 
para km”. Então, o algoritmo deverá realizar a respectiva conversão e apresentar a 
mensagem com o valor convertido. 
Os cálculos para conversão são: 
• Farenheit = (9*Celsius/5) + 32 
• Celsius = 5*(Farenheit-32)/9 
• Kelvin = Celsius + 273 
• Milha = km * 0.62137 
• Km = milha / 0.62137 
Para este exercício, crie duas soluções de algoritmo. Você pode tentar qual SE
SENÃO achar melhor (aninhado, encadeado, SE-SENÃO SE). Ou mesmo, 
ESCOLHA-CASO. Depois que fizer as duas versões do algoritmo, compare-os e 
responda: qual o melhor? Por quê? 
DICA: o enunciado parece grande. Mas pense por partes. Há um menu inicial e, 
dependendo da escolha, um diferente menu. Então, perceba que várias linhas do 
exercício se resumem a uma explicação de uma linha e meia. */

void escolhaCaso() {
    setlocale(LC_ALL, "Portuguese");
    int escolha;
    float valor, resp;

    printf("Digite 1 para Conversão de temperatura; 2 para Conversão de distância: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Digite 1 para Converter Celsius para Farenheit; 2 para Converter Farenheit para Celsius; 3 para Converter Celsius para Kelvin: ");
            scanf("%d", &escolha);

            switch (escolha) {
                case 1:
                    printf("Digite a temperatura em Celsius para converter para Farenheit: ");
                    scanf("%f", &valor);
                    resp = (9.0 / 5.0) * valor + 32;
                    printf("\nConvertido fica %.2f Farenheit\n", resp);
                    break;

                case 2:
                    printf("Digite a temperatura em Farenheit para converter para Celsius: ");
                    scanf("%f", &valor);
                    resp = (5.0 / 9.0) * (valor - 32);
                    printf("\nConvertido fica %.2f Celsius\n", resp);
                    break;

                case 3:
                    printf("Digite a temperatura em Celsius para converter para Kelvin: ");
                    scanf("%f", &valor);
                    resp = valor + 273.15;
                    printf("\nConvertido fica %.2f Kelvin\n", resp);
                    break;

                default:
                    printf("\nOpção inválida para conversão de temperatura.\n");
                    break;
            }
            break;

        case 2:
            printf("Digite 1 para Converter km para milhas; 2 para Converter milhas para km: ");
            scanf("%d", &escolha);

            switch (escolha) {
                case 1:
                    printf("Digite a distância em km para converter para milhas: ");
                    scanf("%f", &valor);
                    resp = valor * 0.62137;  // Corrigido para manter a precisão conforme o enunciado.
                    printf("\nConvertido fica %.2f milhas\n", resp);
                    break;

                case 2:
                    printf("Digite a distância em milhas para converter para km: ");
                    scanf("%f", &valor);
                    resp = valor / 0.62137;  // Corrigido.
                    printf("\nConvertido fica %.2f km\n", resp);
                    break;

                default:
                    printf("\nOpção inválida para conversão de distância.\n");
                    break;
            }
            break;

        default:
            printf("\nOpção inválida. Escolha 1 ou 2.\n");
            break;
    }
}

void seSenao(){
	setlocale(LC_ALL, "Portuguese");
    int escolha;
    float valor, resp;

    printf("Digite 1 para Conversão de temperatura; 2 para Conversão de distância: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite 1 para Converter Celsius para Farenheit; 2 para Converter Farenheit para Celsius; 3 para Converter Celsius para Kelvin: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("Digite a temperatura em Celsius para converter para Farenheit: ");
            scanf("%f", &valor);
            resp = (9.0 / 5.0) * valor + 32;
            printf("\nConvertido fica %.2f Farenheit\n", resp);

        } else if (escolha == 2) {
            printf("Digite a temperatura em Farenheit para converter para Celsius: ");
            scanf("%f", &valor);
            resp = (5.0 / 9.0) * (valor - 32);
            printf("\nConvertido fica %.2f Celsius\n", resp);

        } else if (escolha == 3) {
            printf("Digite a temperatura em Celsius para converter para Kelvin: ");
            scanf("%f", &valor);
            resp = valor + 273.15;
            printf("\nConvertido fica %.2f Kelvin\n", resp);

        } else {
            printf("\nOpção inválida para conversão de temperatura.\n");
        }

    } else if (escolha == 2) {
        printf("Digite 1 para Converter km para milhas; 2 para Converter milhas para km: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("Digite a distância em km para converter para milhas: ");
            scanf("%f", &valor);
            resp = valor * 0.62137;  // Corrigido.
            printf("\nConvertido fica %.2f milhas\n", resp);

        } else if (escolha == 2) {
            printf("Digite a distância em milhas para converter para km: ");
            scanf("%f", &valor);
            resp = valor / 0.62137;  // Corrigido.
            printf("\nConvertido fica %.2f km\n", resp);

        } else {
            printf("\nOpção inválida para conversão de distância.\n");
        }

    } else {
        printf("\nOpção inválida. Escolha 1 ou 2.\n");
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu;
	
	while(menu!=0){
		printf("Escolha qual deseja testar (1 - switch-case; 2 - if-else; 0 - sair): ");
	    scanf("%d", &menu);
	
	    if (menu == 1) {
	        escolhaCaso();
	    } else if (menu == 2) {
	        seSenao();
	    } else if (menu == 0){
	        printf("\nAté a próxima!\n");
	    } else{
			printf("\nDigitou um valor inválido!\n");
		}
	}  

    return 0;
}
