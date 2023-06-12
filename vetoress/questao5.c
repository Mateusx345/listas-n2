#include <stdio.h>

int main() {
   int vetor[8];
   int i, numero, encontrado;

   // Preenchendo o vetor com valores inseridos pelo usuário
   printf("Insira 8 números inteiros:\n");
   for (i = 0; i < 8; i++) {
      printf("Número %d: ", i+1);
      scanf("%d", &vetor[i]);
   }

   // Solicitando um número do teclado
   printf("Digite um número: ");
   scanf("%d", &numero);

   // Pesquisando o número no vetor
   encontrado = 0;
   for (i = 0; i < 8; i++) {
      if (vetor[i] == numero) {
         printf("O número %d foi encontrado na posição %d do vetor.\n", numero, i);
         encontrado = 1;
         break;
      }
   }

   // Verificando se o número não foi encontrado
   if (!encontrado) {
      printf("O número %d não existe no vetor.\n", numero);
   }

   return 0;
}