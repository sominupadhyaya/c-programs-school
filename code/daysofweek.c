#include <stdio.h>
int main()
{
    int day;
    printf("Enter any day from 1 to 7 \n");
    scanf("%d" , &day);
    switch (day){
    case 1:
    printf("It is Sunday");
    break;
    case 2:
    printf("It is Monday");
    break;
    case 3:
    printf("It is Tuesday");
    break;
    case 4:
    printf("It is Wednesday");
    break;
    case 5:
    printf("It is Thursday");
    break;
    case 6:
    printf("It is Friday");
    break;
    case 7:
    printf("It is Saturday");
    break;
    default:
    printf("Invalid Input");
    }
    return 0;
}
