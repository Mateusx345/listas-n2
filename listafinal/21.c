#include <stdio.h>
int main() {
float lado1, lado2, lado3;
printf("Digite os três lados do triângulo: ");
scanf("%f %f %f", &lado1, &lado2, &lado3);
if (lado1 == lado2 && lado2 == lado3) {
printf("Triângulo equilátero\n");
} else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
printf("Triângulo isósceles\n");
} else {
printf("Triângulo escaleno\n");
}
return 0;
}