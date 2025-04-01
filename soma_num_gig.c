#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* soma_numeros_gigantes(char *n1, char *n2) {
    int t1 = strlen(n1);
    int t2 = strlen(n2);
    int tm = (t1 > t2 ? t1 : t2) + 1;
    
    char *res = (char*)malloc((tm + 1) * sizeof(char));
    res[tm] = '\0';
    
    int v = 0;
    int i = t1 - 1;
    int j = t2 - 1;
    int k = tm - 1;
    
    while (i >= 0 || j >= 0 || v) {
        int s = v;
        if (i >= 0) s += n1[i] - '0';
        if (j >= 0) s += n2[j] - '0';
        
        res[k] = (s % 10) + '0';
        v = s / 10;
        
        i--;
        j--;
        k--;
    }
    
    if (k == 0) {
        return res + 1;
    }
    return res;
}

int main() {
    char n1[100], n2[100];
    scanf("%s %s", n1, n2);
    printf("%s", soma_numeros_gigantes(n1, n2));
    return 0;
}


