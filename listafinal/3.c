#include <stdio.h>
int main() {
float metros, decimetros, centimetros, milimetros;
printf("Digite um valor em metros: ");
scanf("%f", &metros);
decimetros = metros * 10;
centimetros = metros * 100;
milimetros = metros * 1000;
printf("O valor em decimetros: %.2f\n", decimetros);
printf("O valor em centimetros: %.2f\n", centimetros);
printf("O valor em milimetros: %.2f\n", milimetros);
return 0;
}