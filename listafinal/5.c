#include <stdio.h>
int main() {
int numero;
printf("Numeros pares de 1 a 100:\n");
for(numero = 2; numero <= 100; numero += 2) {
printf("%d ", numero);
}
printf("\n");
return 0;
}