#include <stdio.h>
int main() {
float nota1, nota2, nota3, nota4;
float mediaAluno, mediaTurma = 0;
int pontosRecuperacao;
int aprovados = 0, reprovados = 0, recuperacao = 0;
for (int i = 1; i <= 5; i++) {
printf("Notas do aluno %d:\n", i);
printf("Nota 1 (peso 3): ");
scanf("%f", &nota1);
printf("Nota 2 (peso 2): ");
scanf("%f", &nota2);
printf("Nota 3 (peso 1): ");
scanf("%f", &nota3);
printf("Nota 4 (peso 1): ");
scanf("%f", &nota4);
mediaAluno = (nota1 * 3 + nota2 * 2 + nota3 + nota4) / 7;
mediaTurma += mediaAluno;
printf("Média do aluno %d: %.2f\n", i, mediaAluno);
if (mediaAluno >= 7.0) {
printf("Situação: Aprovado\n");
aprovados++;
} else if (mediaAluno >= 4.0) {
printf("Situação: Recuperação\n");
pontosRecuperacao = 7 - mediaAluno;
printf("Pontos necessários para aprovação: %d\n", pontosRecuperacao);
recuperacao++;
} else {
printf("Situação: Reprovado\n");
reprovados++;
}
printf("\n");
}
printf("Média da turma: %.2f\n", mediaTurma / 5);
printf("Quantidade de alunos aprovados: %d\n", aprovados);
printf("Quantidade de alunos em recuperação: %d\n", recuperacao);
printf("Quantidade de alunos reprovados: %d\n", reprovados);
return 0;
}