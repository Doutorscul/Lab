#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char sexo;
    char cpf[12];
    char dataNascimento[11];
    int codigoSetor;
    char cargo[30];
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario;

    printf("Digite o nome do funcionário: ");
    scanf("%s", funcionario.nome);

    printf("Digite a idade do funcionário: ");
    scanf("%d", &funcionario.idade);

    printf("Digite o sexo do funcionário (M/F): ");
    scanf(" %c", &funcionario.sexo);

    printf("Digite o CPF do funcionário: ");
    scanf("%s", funcionario.cpf);

    printf("Digite a data de nascimento do funcionário (dd/mm/aaaa): ");
    scanf("%s", funcionario.dataNascimento);

    printf("Digite o código do setor onde trabalha (0-99): ");
    scanf("%d", &funcionario.codigoSetor);

    printf("Digite o cargo do funcionário: ");
    scanf("%s", funcionario.cargo);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario.salario);

    printf("\nDados do Funcionário\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de Nascimento: %s\n", funcionario.dataNascimento);
    printf("Código do Setor: %d\n", funcionario.codigoSetor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salário: %.2f\n", funcionario.salario);

    return 0;
}
