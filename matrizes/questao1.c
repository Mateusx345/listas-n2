#include <stdio.h>

int main() {
int matriz[3][3];
printf("Preencha a matriz 3x3:\n");
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
printf("Digite o valor para a posição (%d, %d): ", i, j);
scanf("%d", &matriz[i][j]);
}
}
printf("\nA matriz preenchida é:\n");
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
printf("%d ", matriz[i][j]);
}
printf("\n");
}
return 0;
}
