#include <stdio.h>
void listarCrescente(int lista[], int tamanho) {
int i, j, temp;
for (i = 0; i < tamanho - 1; i++) {
for (j = 0; j < tamanho - 1 - i; j++) {
if (lista[j] > lista[j + 1]) {
temp = lista[j];
lista[j] = lista[j + 1];
lista[j + 1] = temp;
}
}
}
printf("Valores em ordem crescente:\n");
for (i = 0; i < tamanho; i++) {
printf("%d ", lista[i]);
}
printf("\n");
}
void listarDecrescente(int lista[], int tamanho) {
int i, j, temp;
for (i = 0; i < tamanho - 1; i++) {
for (j = 0; j < tamanho - 1 - i; j++) {
if (lista[j] < lista[j + 1]) {
temp = lista[j];
lista[j] = lista[j + 1];
lista[j + 1] = temp;
}
}
}
printf("Valores em ordem decrescente:\n");
for (i = 0; i < tamanho; i++) {
printf("%d ", lista[i]);
}
printf("\n");
}
void listarOriginal(int lista[], int tamanho) {
printf("Valores na ordem original:\n");
for (int i = 0; i < tamanho; i++) {
printf("%d ", lista[i]);
}
printf("\n");
}
int main() {
int lista[10];
printf("Digite 10 valores inteiros:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &lista[i]);
}
int opcao;
printf("Escolha uma opcao:\n");
printf("1 - Listar em ordem crescente\n");
printf("2 - Listar em ordem decrescente\n");
printf("3 - Listar na ordem original\n");
scanf("%d", &opcao);
switch (opcao) {
case 1:
listarCrescente(lista, 10);
break;
case 2:
listarDecrescente(lista, 10);
break;
case 3:
listarOriginal(lista, 10);
break;
default:
printf("Opcao invalida!\n");
break;
}
return 0;
}