#include <stdio.h>
#include <string.h>

int Func_Lexic(char *palavra1, char *palavra2)
{
   int result;
   result = strcmp(palavra1, palavra2);
   
   if(result > 0)
   {
       return 1;
   }
   else
   {
       if(result < 0)
       {
           return -1;
       }
       else
       {
            return 0;
       }
   }
}

int main()
{
   char str1[100], str2[100];
   
   fgets(str1, sizeof(str1), stdin);
   fgets(str2, sizeof(str2), stdin);
   
   printf("%d\n", Func_Lexic(str1, str2));
}
