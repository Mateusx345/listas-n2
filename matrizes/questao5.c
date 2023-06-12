#include <stdio.h>
int main() {
int matriz[3][3];
printf("Preencha a matriz 3x3:\n");
// Leitura dos elementos da matriz
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
printf("Digite o valor para a posição (%d, %d): ", i, j);
scanf("%d", &matriz[i][j]);
}
}
printf("\nOs elementos da matriz, exceto os da diagonal principal, são:\n");
// Impressão dos elementos, exceto os da diagonal principal
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
if (i != j) {
printf("%d ", matriz[i][j]);
}
}
}
return 0; 
}