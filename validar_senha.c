#include <stdio.h>
#include <string.h>

char classificar_senha(char *s) {
    int tm = 0, ma = 0, mi = 0, nm = 0, ce = 0;
    int i, len = strlen(s);
    
    if(len >= 8) tm = 1;
    
    for(i = 0; i < len; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') ma = 1;
        if(s[i] >= 'a' && s[i] <= 'z') mi = 1;
        if(s[i] >= '0' && s[i] <= '9') nm = 1;
        if(s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='&' || s[i]=='*') ce = 1;
    }
    
    int total = tm + ma + mi + nm + ce;
    
    if(total == 5) return 'A';
    if(total >= 3) return 'B';
    return 'C';
}

int main() 
{
    char senha[100];
    scanf("%s", senha);
    printf("%c\n", classificar_senha(senha));
    return 0;
}
