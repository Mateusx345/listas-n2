#include <stdio.h>

int main() {
   int vetor[10];
   int i, maior, menor, diferenca;

   // Preenchendo o vetor com valores inseridos pelo usuário
   printf("Insira 10 números:\n");
   for (i = 0; i < 10; i++) {
      printf("Número %d: ", i+1);
      scanf("%d", &vetor[i]);
   }

   // Encontrando o maior e o menor número
   maior = vetor[0];  // Assume que o primeiro número é o maior
   menor = vetor[0];  // Assume que o primeiro número é o menor
   for (i = 1; i < 10; i++) {
      if (vetor[i] > maior) {
         maior = vetor[i];  // Atualiza o maior número
      }
      if (vetor[i] < menor) {
         menor = vetor[i];  // Atualiza o menor número
      }
   }

   // Calculando a diferença entre o maior e o menor número
   diferenca = maior - menor;

   // Exibindo o maior, o menor e a diferença
   printf("O maior número é: %d\n", maior);
   printf("O menor número é: %d\n", menor);
   printf("A diferença entre eles é: %d\n", diferenca);

   return 0;
}