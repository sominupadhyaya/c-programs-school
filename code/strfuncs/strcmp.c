#include <stdio.h>
#include <string.h>
int main(){
     char str1[20] = "Kathmandu";
     char str2[20] = "Austin";
     if (strcmp(str1, str2) == 0){ //Checks the strings for equality
        printf("string 1 and string 2 are same");
     }else{
         printf("string 1 and 2 are different");
      }
     return 0;
}