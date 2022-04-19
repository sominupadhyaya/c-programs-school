// display whether a given character is uppercase or lowercase

#include <stdio.h>

int main () {
    char a;
    printf("Enter a letter : ");
    a = getchar();
    if(a > 64 && a < 91 ){
        printf("The character is uppercase");
    }else if(a > 96 && a < 123){
        printf("The character entered is lowercase");
    }else {
        printf("Invalid input");
    }
    return 0;
}