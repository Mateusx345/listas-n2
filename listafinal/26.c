#include <stdio.h>
int main() {
int tamanhoLado;
printf("Digite o tamanho do lado do quadrado (entre 1 e 20): ");
scanf("%d", &tamanhoLado);
if (tamanhoLado < 1 || tamanhoLado > 20) {
printf("Tamanho do lado inválido. O tamanho deve estar entre 1 e 20.\n");
return 0;
}
for (int i = 0; i < tamanhoLado; i++) {
for (int j = 0; j < tamanhoLado; j++) {
printf("* ");
}
printf("\n");
}
return 0;
}
