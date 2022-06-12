#include <stdio.h>
#include <string.h>
int main(){
     char str1[30] = "string 1";
     char str2[30] = "string 2";
     /* this function has copied str2 into str1*/
     strcpy(str1,str2);
     printf("String str1 after copying is: %s", str1);
     return 0;
}