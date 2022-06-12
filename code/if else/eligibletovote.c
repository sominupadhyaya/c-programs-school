#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d" , &age);
   if(age >= 18){
       printf("Eligible to vote");
   }else{
       print("Not eligible to vote");
   }
    return 0;
}
