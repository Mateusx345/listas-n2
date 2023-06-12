#include <stdio.h>
int main() {
char tipoCarro;
float distancia, consumo;
printf("Digite o tipo de carro (A, B ou C): ");
scanf(" %c", &tipoCarro);
printf("Digite a distância rodada em km: ");
scanf("%f", &distancia);
switch (tipoCarro) {
case 'A':
consumo = distancia / 8.0;
break;
case 'B':
consumo = distancia / 9.0;
break;
case 'C':
consumo = distancia / 12.0;
break;
default:
printf("Tipo de carro inválido.\n");
return 0;
}
printf("O consumo estimado é de %.2f litros.\n", consumo);
return 0;
}
