#include <stdio.h>
int main()
{
    long int i;
    for (size_t i = 0; i <= 100; i++){
        if (i%2 != 0)
        {
            printf("Odd number :  %ld \n" , i);
        }else
        {
            printf("Even number : %ld \n" , i);
        }
    }
    return 0;
}
