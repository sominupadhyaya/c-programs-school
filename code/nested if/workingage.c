#include <stdio.h>
int main(){
    int a;
    printf("Enter your age:\n");
    scanf("%d",&a);
    if ( a < 18 ){
    printf("cannot work since underaged");
    }else{
        if (a >= 18 && a <= 65 ){
        printf("Eligible for working \n");
    }else{
    printf("cannot work since overaged");
    }
}
    return 0;
}