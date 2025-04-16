#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que apresente o menu: �1-Convers�o de temperatura; 2
Convers�o de dist�ncia�. Se o usu�rio escolher a op��o 1, apresentar o menu: �1
Converter Celsius para Farenheit; 2-Converter Farenheit para Celsius; 3-Converter 
Celsius para Kelvin�. O algoritmo dever�, ent�o, pedir uma temperatura, realizar a 
convers�o escolhida e apresentar a mensagem com o valor convertido.  
Por outro lado, se o usu�rio escolher a convers�o de dist�ncia (op��o 2 do primeiro 
menu), ent�o, apresentar o menu: �1-Converter km para milhas; 2-Converter milhas 
para km�. Ent�o, o algoritmo dever� realizar a respectiva convers�o e apresentar a 
mensagem com o valor convertido. 
Os c�lculos para convers�o s�o: 
� Farenheit = (9*Celsius/5) + 32 
� Celsius = 5*(Farenheit-32)/9 
� Kelvin = Celsius + 273 
� Milha = km * 0.62137 
� Km = milha / 0.62137 
Para este exerc�cio, crie duas solu��es de algoritmo. Voc� pode tentar qual SE
SEN�O achar melhor (aninhado, encadeado, SE-SEN�O SE). Ou mesmo, 
ESCOLHA-CASO. Depois que fizer as duas vers�es do algoritmo, compare-os e 
responda: qual o melhor? Por qu�? 
DICA: o enunciado parece grande. Mas pense por partes. H� um menu inicial e, 
dependendo da escolha, um diferente menu. Ent�o, perceba que v�rias linhas do 
exerc�cio se resumem a uma explica��o de uma linha e meia. */

void escolhaCaso() {
    setlocale(LC_ALL, "Portuguese");
    int escolha;
    float valor, resp;

    printf("Digite 1 para Convers�o de temperatura; 2 para Convers�o de dist�ncia: ");
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
                    printf("\nOp��o inv�lida para convers�o de temperatura.\n");
                    break;
            }
            break;

        case 2:
            printf("Digite 1 para Converter km para milhas; 2 para Converter milhas para km: ");
            scanf("%d", &escolha);

            switch (escolha) {
                case 1:
                    printf("Digite a dist�ncia em km para converter para milhas: ");
                    scanf("%f", &valor);
                    resp = valor * 0.62137;  // Corrigido para manter a precis�o conforme o enunciado.
                    printf("\nConvertido fica %.2f milhas\n", resp);
                    break;

                case 2:
                    printf("Digite a dist�ncia em milhas para converter para km: ");
                    scanf("%f", &valor);
                    resp = valor / 0.62137;  // Corrigido.
                    printf("\nConvertido fica %.2f km\n", resp);
                    break;

                default:
                    printf("\nOp��o inv�lida para convers�o de dist�ncia.\n");
                    break;
            }
            break;

        default:
            printf("\nOp��o inv�lida. Escolha 1 ou 2.\n");
            break;
    }
}

void seSenao(){
	setlocale(LC_ALL, "Portuguese");
    int escolha;
    float valor, resp;

    printf("Digite 1 para Convers�o de temperatura; 2 para Convers�o de dist�ncia: ");
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
            printf("\nOp��o inv�lida para convers�o de temperatura.\n");
        }

    } else if (escolha == 2) {
        printf("Digite 1 para Converter km para milhas; 2 para Converter milhas para km: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("Digite a dist�ncia em km para converter para milhas: ");
            scanf("%f", &valor);
            resp = valor * 0.62137;  // Corrigido.
            printf("\nConvertido fica %.2f milhas\n", resp);

        } else if (escolha == 2) {
            printf("Digite a dist�ncia em milhas para converter para km: ");
            scanf("%f", &valor);
            resp = valor / 0.62137;  // Corrigido.
            printf("\nConvertido fica %.2f km\n", resp);

        } else {
            printf("\nOp��o inv�lida para convers�o de dist�ncia.\n");
        }

    } else {
        printf("\nOp��o inv�lida. Escolha 1 ou 2.\n");
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
	        printf("\nAt� a pr�xima!\n");
	    } else{
			printf("\nDigitou um valor inv�lido!\n");
		}
	}  

    return 0;
}
