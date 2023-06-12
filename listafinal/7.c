#include <stdio.h>
#include <string.h>
#define TAMANHO_MAX 100
int main() {
char nome[TAMANHO_MAX];
printf("Digite o nome: ");
fgets(nome, TAMANHO_MAX, stdin);
// Remover o caractere de nova linha do final da string
if (nome[strlen(nome) - 1] == '\n') {
nome[strlen(nome) - 1] = '\0';
}
printf("As 4 primeiras letras do nome: ");
for (int i = 0; i < 4 && i < strlen(nome); i++) {
printf("%c", nome[i]);
}
printf("\n");
return 0;
}
