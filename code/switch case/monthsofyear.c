#include <stdio.h>
int main()
{
    int month;
    printf("Enter any day from 1 to 12 \n");
    scanf("%d" , &month);
    switch (month){
    case 1:
    printf("It is January");
    break;
    case 2:
    printf("It is February");
    break;
    case 3:
    printf("It is March");
    break;
    case 4:
    printf("It is April");
    break;
    case 5:
    printf("It is May");
    break;
    case 6:
    printf("It is June");
    break;
    case 7:
    printf("It is July");
    break;
    case 8:
    printf("It is August");
    break;
    case 9:
    printf("It is September");
    break;
    case 10:
    printf("It is October");
    break;
    case 11:
    printf("It is November");
    break;
    case 12:
    printf("It is December");
    break;
    default:
    printf("Enter a number from 1 to 12 only");
    }
    return 0;
}
