#include <stdio.h>

int main() {
   int vetor[10];
   int i;

   // Preenchendo o vetor com valores inseridos pelo usuário
   printf("Insira 10 números:\n");
   for (i = 0; i < 10; i++) {
      printf("Número %d: ", i+1);
      scanf("%d", &vetor[i]);
   }

   // Exibindo os números ímpares
   printf("Números ímpares: ");
   for (i = 0; i < 10; i++) {
      if (vetor[i] % 2 != 0) {
         printf("%d ", vetor[i]);
      }
   }
   printf("\n");

   return 0;
}