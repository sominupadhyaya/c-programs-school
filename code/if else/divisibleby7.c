#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d" , &num);
    if(num % 7 == 0){
        printf("The number is divisible by 7");
    }else
    {
        printf("The number isnt divisible by 7");
    }
    return 0;
}