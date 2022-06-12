#include <stdio.h>
#include <string.h>
int main()
{
     char str1[10] = "Hello";
     char str2[10] = " World";
     strcat(str1,str2);
     printf("Output string after concatenation: %s", str1);
     return 0;
}