// display the following series 1,5,9,13...upto 50th term

#include <stdio.h>
int main() {
    int i,n;
    n = 1;
    for (i = 1; i <= 50; i++)
    {
        printf("%d \t" , n);
        n = n+4;
    }
    return 0;
}