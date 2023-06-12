#include <stdio.h>
int main() {
int dia, mes, ano;
printf("Digite o dia, mês e ano do aniversário (formato: DD MM AAAA): ");
scanf("%d %d %d", &dia, &mes, &ano);
if (ano != 2023) {
printf("Data inválida. Estamos no ano de 2023.\n");
} else if (mes < 1 || mes > 12) {
printf("Data inválida. Mês inválido.\n");
} else if (dia < 1 || dia > 31) {
printf("Data inválida. Dia inválido.\n");
} else {
printf("Data válida.\n");
}
return 0;
}