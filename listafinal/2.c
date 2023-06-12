#include <stdio.h>
int main() {
int numero;
printf("Digite um numero inteiro: ");
scanf("%d", &numero);
printf("O sucessor de %d eh %d\n", numero, numero + 1);
printf("O antecessor de %d eh %d\n", numero, numero - 1);
return 0;
}