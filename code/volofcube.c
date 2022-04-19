#include <stdio.h>

int main() {
    float l,volume;
    printf("Enter the length of the cube : ");
    scanf("%f" ,&l);
    volume = l*l*l;
    printf("The volume is : %f" , volume);
    return 0;
}