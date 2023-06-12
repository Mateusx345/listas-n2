#include <stdio.h>
int main() {
float valorCompra, valorVenda;
float lucroMenor20 = 0.45; // 45% de lucro quando valorCompra < 20
float lucroMaiorOuIgual20 = 0.30; // 30% de lucro quando valorCompra >= 20
printf("Digite o valor de compra do produto: ");
scanf("%f", &valorCompra);
if (valorCompra < 20.0) {
valorVenda = valorCompra + (valorCompra * lucroMenor20);
} else {
valorVenda = valorCompra + (valorCompra * lucroMaiorOuIgual20);
}
printf("Valor de venda: R$ %.2f\n", valorVenda);
return 0;
}
