#include <stdio.h>

int main() {
int matriz[4][4];
printf("Preencha a matriz 4x4:\n");
// Leitura dos elementos da matriz
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 4; j++) {
printf("Digite o valor para a posição (%d, %d): ", i, j);
scanf("%d", &matriz[i][j]);
}
}
printf("\nOs elementos da diagonal principal são:\n");
// Impressão dos elementos da diagonal principal
for (int i = 0; i < 4; i++) {
printf("%d ", matriz[i][i]);
}
return 0;
}