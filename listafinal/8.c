#include <stdio.h>
int main() {
float precoProduto, desconto, novoPreco;
printf("Digite o preco do produto: ");
scanf("%f", &precoProduto);
desconto = 0.09 * precoProduto;
novoPreco = precoProduto - desconto;
printf("O novo preco com desconto de 9%%: %.2f\n", novoPreco);
return 0;
}
