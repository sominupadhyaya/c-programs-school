#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d" , &num);
    if(num > 0){
        printf("It is positive");
    }else if (num < 0)
    {
        printf("It is negative");
    }else{
        printf("It is 0");
    }
    return 0;
}
