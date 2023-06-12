#include <stdio.h>
void trocar(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
void ordenar(int *a, int *b, int *c) {
if (*a > *b) {
trocar(a, b);
}
if (*a > *c) {
trocar(a, c);
}
if (*b > *c) {
trocar(b, c);
}
}
int main() {
int num1, num2, num3;
printf("Digite três números inteiros: ");
scanf("%d %d %d", &num1, &num2, &num3);
ordenar(&num1, &num2, &num3);
printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);
return 0;
}