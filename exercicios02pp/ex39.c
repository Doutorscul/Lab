 #include <stdio.h>
 #include <stdio.h>

int main() {
    float salario_atual, salario_reajustado;
    int tempo_servico, bonus;

    // Ler o salário atual e tempo de serviço do funcionário
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    printf("Digite o tempo de serviço do funcionário (em anos): ");
    scanf("%d", &tempo_servico);

    // Calcular o reajuste salarial e o bônus de acordo com a tabela
    if (salario_atual <= 500) {
        salario_reajustado = salario_atual * 1.25;
        bonus = 0;
    }
    else if (salario_atual <= 1000) {
        salario_reajustado = salario_atual * 1.20;
        if (tempo_servico < 1) {
            bonus = 0;
        }
        else {
            bonus = 100;
        }
    }
    else if (salario_atual <= 1500) {
        salario_reajustado = salario_atual * 1.15;
        if (tempo_servico >= 4 && tempo_servico <= 6) {
            bonus = 200;
        }
        else {
            bonus = 0;
        }
    }
    else if (salario_atual <= 2000) {
        salario_reajustado = salario_atual * 1.10;
        if (tempo_servico >= 7 && tempo_servico <= 10) {
            bonus = 300;
        }
        else {
            bonus = 0;
        }
    }
    else {
        salario_reajustado = salario_atual;
        if (tempo_servico > 10) {
            bonus = 500;
        }
        else {
            bonus = 0;
        }
    }

    // Imprimir o salário reajustado com o bônus (se houver)
    if (salario_reajustado == salario_atual) {
        printf("O funcionário não tem direito a aumento.\n");
    }
    else {
        salario_reajustado += bonus;
        printf("O novo salário do funcionário é R$ %.2f\n", salario_reajustado);
    }

    return 0;
}
