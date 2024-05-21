#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <string>

int main() {

    float salarioHr;
    float horaextra;
    float horasTrabalhadas;
    float salario;
    float salarioDia;
    float horaextratotal;

    printf("Quanto voce ganha por mes:");
    scanf("%f", &salario);

    salarioDia = salario / 30;

    printf("Voce ganha por dia:$%.2f", salarioDia);
    printf("\n");
    
    printf("Quantas horas trabalhadas:");
    scanf ("%f", &horasTrabalhadas);

    salarioHr = salarioDia / horasTrabalhadas;

    printf("Voce ganha por hora:$%.2f", salarioHr);
    printf("\n");
    printf("Tem horas extra?:");
    scanf("%f", &horaextra);

    horaextratotal = horaextra * salarioHr * 1.5;
    printf("\n");
    printf("Horas extras sao:$ %.2f", horaextratotal);
    

    return 0;
}