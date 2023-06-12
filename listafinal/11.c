#include <stdio.h>
int main() {
float valorHoraAula, salarioBruto, salarioLiquido;
int numeroAulas;
float descontoINSS;
printf("Digite o valor da hora aula: ");
scanf("%f", &valorHoraAula);
printf("Digite o numero de aulas dadas: ");
scanf("%d", &numeroAulas);
printf("Digite a porcentagem de desconto do INSS: ");
scanf("%f", &descontoINSS);
salarioBruto = valorHoraAula * numeroAulas;
salarioLiquido = salarioBruto - (salarioBruto * (descontoINSS / 100));
printf("O salario liquido do professor: R$ %.2f\n", salarioLiquido);
return 0;
}