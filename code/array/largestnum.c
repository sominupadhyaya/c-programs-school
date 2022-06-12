#include<stdio.h>

int main(){
    int i,num[5]={1,2,3,4,5},large=num[0];
    for(i = 0; i < 5; i++){
        if(large<num[i]){
            large=num[i];
        }
    }
    printf("the largest number is %d\n",large);
    return 0;
}