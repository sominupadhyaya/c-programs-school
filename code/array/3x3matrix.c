#include <stdio.h>

int main(){
    int i,j,matrix[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the element of place %d%d: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
