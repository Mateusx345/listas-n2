#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("Soma: %.2f\n", soma(num1, num2));
    printf("Subtração: %.2f\n", subtracao(num1, num2));
    printf("Multiplicação: %.2f\n", multiplicacao(num1, num2));
    printf("Divisão: %.2f\n", divisao(num1, num2));
    
    return 0;
}