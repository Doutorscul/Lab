#include <stdio.h>


typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char descricao[100];
} Compromisso;

int main() {
    
    Horario horario;
    horario.hora = 10;
    horario.minutos = 30;
    horario.segundos = 0;
    Data data;
    data.dia = 18;
    data.mes = 5;
    data.ano = 2023;
    Compromisso compromisso;
    compromisso.data = data;
    compromisso.horario = horario;
    strcpy(compromisso.descricao, "Reunião de equipe");
    printf("Compromisso: %s\n", compromisso.descricao);
    printf("Data: %d/%d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Horário: %d:%d:%d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);

    return 0;
}
