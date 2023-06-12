#include <stdio.h>
int main() {
int matriz[3][3];
int matrizResultado[3][3];
printf("Preencha a matriz 3x3:\n");
// Leitura dos elementos da matriz
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
printf("Digite o valor para a posição (%d, %d): ", i, j);
scanf("%d", &matriz[i][j]);
}
}
// Multiplicação dos elementos por 2 e armazenamento na matrizResultado
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
matrizResultado[i][j] = matriz[i][j] * 2;
}
}
printf("\nA matriz resultante, multiplicada por 2, é:\n");
// Impressão da matrizResultado
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
printf("%d ", matrizResultado[i][j]);
}
printf("\n");
}
return 0;
}
