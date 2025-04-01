#include <stdio.h>
int* troco(float valor) {
    int centavos = valor * 100;
    int moedas[] = {200, 100, 50, 25, 10, 5, 1};
    int qtd[7] = {0};
    
    for(int i = 0; i < 7; i++) {
        qtd[i] = centavos / moedas[i];
        centavos = centavos % moedas[i];
    }
    return qtd; 
}
int main() 
{
    float valor;
    int *qtd;
    scanf("%f", &valor);
    qtd = troco(valor); 
    if(qtd[0] > 0) printf("M R$ 2,00: %d\n", qtd[0]);
    if(qtd[1] > 0) printf("M R$ 1,00: %d\n", qtd[1]);
    if(qtd[2] > 0) printf("M R$ 0,50: %d\n", qtd[2]);
    if(qtd[3] > 0) printf("M R$ 0,25: %d\n", qtd[3]);
    if(qtd[4] > 0) printf("M R$ 0,10: %d\n", qtd[4]);
    if(qtd[5] > 0) printf("M R$ 0,05: %d\n", qtd[5]);
    if(qtd[6] > 0) printf("M R$ 0,01: %d\n", qtd[6]);
    return 0;
}
