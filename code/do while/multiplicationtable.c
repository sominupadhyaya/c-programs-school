#include<stdio.h>

    int main(){
    int i=1 , a;
    printf("enter the number to be shown the multiplication table of : ");
    scanf("%d" ,&a);
    do{
    printf("%d * %d = %d \n",a , i , a*i);
    i++;
    }while(i<=10);
    return 0;
}