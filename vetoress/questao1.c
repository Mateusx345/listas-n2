#include <stdio.h>

int main() {
   int vetor[10];
   int i, maior;

   // Preenchendo o vetor com valores inseridos pelo usuário
   printf("Insira 10 números:\n");
   for (i = 0; i < 10; i++) {
      printf("Número %d: ", i+1);
      scanf("%d", &vetor[i]);
   }

   // Encontrando o maior número
   maior = vetor[0];  // Assume que o primeiro número é o maior
   for (i = 1; i < 10; i++) {
      if (vetor[i] > maior) {
         maior = vetor[i];  // Atualiza o maior número
      }
   }

   // Exibindo o maior número
   printf("O maior número é: %d\n", maior);

   return 0;
}