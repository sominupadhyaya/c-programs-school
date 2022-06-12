#include <stdio.h>

int main(){
    int salaries[10] , i;
    for(i=0; i<10; i++){
        printf("Enter the salary of employee %d: " , i+1);
        scanf("%d",&salaries[i]);
    }
    printf("The salaries of the employees are: ");
    for(i=0;i<10;i++){
        printf("%d \n",salaries[i]);
    }
}