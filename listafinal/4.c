#include <stdio.h>
int main() {
int numero;
printf("Numeros impares de 1 a 100:\n");
for(numero = 1; numero <= 100; numero++) {
if(numero % 2 != 0) {
printf("%d ", numero);
}
}
printf("\n");
return 0;
}
