 #include <stdio.h>
 #include <stdio.h>

int main () {

    float custoFabrica, custoConsumidor, comissao, impostos;
    printf ("Digite o custo de fabirca do carro: R$");
    sacnf ("%f", &custoFabrica);


if (custoFabrica <= 12000) {
    comissao = 0.05 * custoFabrica;
    impostos = 0;
} else if (custoFabrica <= 25000) {
    comissao = 0.10 * custoFabrica;
    impostos = 0.15 * custoFabrica;
} else {
    comissao = 0.15 * custoFabrica;
    impostos = 0.20 * custoFabrica;
}

custoConsumidor = custoFabrica + comissao + impostos;

printf("O custo ao consumidor é de R$%.2f", custoConsumidor);

return 0;

}
