#include <stdio.h>

int isPrime(int num) {
   if (num <= 1) {
      return 0;
   }
   for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) {
         return 0;
      }
   }
   return 1;
}

int main() {
   int vetor[10];
   int i;

   // Preenchendo o vetor com valores inseridos pelo usuário
   printf("Insira 10 números:\n");
   for (i = 0; i < 10; i++) {
      printf("Número %d: ", i+1);
      scanf("%d", &vetor[i]);
   }

   // Exibindo os números primos
   printf("Números primos: ");
   for (i = 0; i < 10; i++) {
      if (isPrime(vetor[i])) {
         printf("%d ", vetor[i]);
      }
   }
   printf("\n");

   return 0;
}