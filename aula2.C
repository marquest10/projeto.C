#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float CalcSalRec(float n_hr, float s_min)
{
    float s_bruto, imposto, s_receber;
    // Assuming minimum salary is for 2.0 hours worked
    s_bruto = n_hr * (s_min / 2.0);
    imposto = s_bruto * 3 / 100;
    s_receber = s_bruto - imposto;
    return s_receber;
}

int main()
{

    setlocale(LC_ALL, "Portugues");
    float horas_trab, sal_min, sal_rec;

    printf("Insira o numero de horas trabalhadas:\n");
    scanf("%f", &horas_trab);
    printf("Insira o salario mínimo:\n");
    scanf("%f", &sal_min);

    sal_rec = CalcSalRec(horas_trab, sal_min);

    printf("Salario  a receber : R$ %.2f.\n", sal_rec);

    return 0;
}