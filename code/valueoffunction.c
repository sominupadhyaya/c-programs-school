//function = 2x^4+3y^2
#include <stdio.h>
int main()
{
    int x,y,val;
    printf("Enter the values of x and y");
    scanf("%d %d" , &x , &y);
    val = 2*x*x*x*x+3*y*y;
    printf("The value of the function is %d" , val);
    return 0;
}
