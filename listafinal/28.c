#include <stdio.h>
int main() {
int idade, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0;
float peso, somaPeso1 = 0.0, somaPeso2 = 0.0, somaPeso3 = 0.0, somaPeso4 = 0.0;
int i = 1;
do {
printf("Digite a idade da pessoa %d: ", i);
scanf("%d", &idade);
if (idade != -1) {
printf("Digite o peso da pessoa %d: ", i);
scanf("%f", &peso);
if (idade >= 1 && idade <= 10) {
somaPeso1 += peso;
faixa1++;
} else if (idade <= 20) {
somaPeso2 += peso;
faixa2++;
} else if (idade <= 30) {
somaPeso3 += peso;
faixa3++;
} else {
somaPeso4 += peso;
faixa4++;
}
i++;
}
} while (idade != -1);
printf("Média de peso da faixa 1 a 10 anos: %.2f\n", somaPeso1 / faixa1);
printf("Média de peso da faixa 11 a 20 anos: %.2f\n", somaPeso2 / faixa2);
printf("Média de peso da faixa 21 a 30 anos: %.2f\n", somaPeso3 / faixa3);
printf("Média de peso da faixa acima de 30 anos: %.2f\n", somaPeso4 / faixa4);
printf("Quantidade de pessoas na faixa 1 a 10 anos: %d\n", faixa1);
printf("Quantidade de pessoas na faixa 11 a 20 anos: %d\n", faixa2);
printf("Quantidade de pessoas na faixa 21 a 30 anos: %d\n", faixa3);
printf("Quantidade de pessoas acima de 30 anos: %d\n", faixa4);
return 0;
}
