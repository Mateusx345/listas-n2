#include <stdio.h>
int main() {
int matriz[2][3];
int soma = 0;
printf("Digite 6 valores inteiros para preencher a matriz 2x3:\n");
// Leitura dos valores e preenchimento da matriz
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 3; j++) {
printf("Digite o valor para a posição (%d, %d): ", i, j);
scanf("%d", &matriz[i][j]);
soma += matriz[i][j]; // Soma dos valores
}
}
printf("\nA soma dos 6 números é: %d\n", soma);
return 0;
}
