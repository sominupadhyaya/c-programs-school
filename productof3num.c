#include <stdio.h>

int main()
{
    int a,b,c,product;
    printf("Enter any 3 numbers");
    scanf("%d %d %d" , &a , &b ,&c);
    product = a*b*c;
    printf("The product is : %d" , product);
    return 0;
}