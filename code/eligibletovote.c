#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d" , &age);
    age >= 18 ? printf("Eligible to vote") : printf("Not eligible to vote");
    return 0;
}
