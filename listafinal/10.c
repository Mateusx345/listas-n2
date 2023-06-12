#include <stdio.h>
int main() {
int numeroDecimal;
printf("Digite um numero decimal: ");
scanf("%d", &numeroDecimal);
printf("O numero decimal %d em hexadecimal: 0x%X\n", numeroDecimal,
numeroDecimal);
printf("O numero decimal %d em octal: %o\n", numeroDecimal, numeroDecimal);
return 0;
}
