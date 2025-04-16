#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Definindo as vari�veis
    int num_total_prestacoes, num_prestacoes_pagas;
    float valor_prestacao, total_pago, saldo_devedor;

    // Solicita os dados ao usu�rio
    printf("Digite o n�mero total de presta��es: ");
    scanf("%d", &num_total_prestacoes);

    printf("Digite o n�mero de presta��es pagas: ");
    scanf("%d", &num_prestacoes_pagas);

    printf("Digite o valor da presta��o: ");
    scanf("%f", &valor_prestacao);

    // Calcula o total pago e o saldo devedor
    total_pago = num_prestacoes_pagas * valor_prestacao;
    saldo_devedor = (num_total_prestacoes * valor_prestacao) - total_pago;

    // Exibe os resultados
    printf("Total pago at� agora: R$ %.2f\n", total_pago);
    printf("Saldo devedor: R$ %.2f\n", saldo_devedor);

    return 0;
}
