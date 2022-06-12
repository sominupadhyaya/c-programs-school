#include <stdio.h>

int main(){
    float a , area;
    printf("Enter the radius : ");
    scanf("%f" , &a);
    area = a*a*3.1415;
    printf("The area is %f" ,area);
    return 0;
}