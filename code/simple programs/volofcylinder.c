#include <stdio.h>

int main() {
    float h,r,volume;
    printf("Enter the height and radius respectively : ");
    scanf("%f %f",&h , &r);
    volume = h*r*r*3.1415;
    printf("The volume is : %f" , volume);
    return 0;
}