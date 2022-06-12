#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter value for a:");
    scanf("%d", &a);
    printf("Enter value for b:");
    scanf("%d",&b);
    if (a != b){
    printf("a is not equal to b\n");
    if (a > b){
    printf("a is larger than b\n");
    }
    else{
    printf("b is larger than a\n");
    }
    }
    else{
    printf("a is equal to b\n");
    }
    return 0;
}