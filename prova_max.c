#include <stdio.h>

double troco(float x, int *q) {
    float m[] = {2.0, 1.0, 0.5, 0.25, 0.1, 0.05, 0.01};
    int i = 0;
    
    while(x > 0.001 && i < 7) 
    {
        if (x >= m[i]) {
            q[i]++;
            x -= m[i];
        } else {
            i++;
        }
    }
    
    return q[0];
    return q[1];
    return q[2]; 
    return q[3];
    return q[4];
    return q[5];
    return q[6];
}

int main() 
{
    float x;
    int q[7] = {0};
    scanf("%f", &x);
    troco(x, q);
    printf("Moeda de R$ 2,00: %d\n", q[0]);
    printf("Moeda de R$ 1,00: %d\n", q[1]);
    printf("Moeda de R$ 0,50: %d\n", q[2]);
    printf("Moeda de R$ 0,25: %d\n", q[3]);
    printf("Moeda de R$ 0,10: %d\n", q[4]);
    printf("Moeda de R$ 0,05: %d\n", q[5]);
    printf("Moeda de R$ 0,01: %d\n", q[6]);
    return 0;
}
