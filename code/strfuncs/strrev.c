// show an example of strrev()
#include <stdio.h>
int main(){
    char str[20];
    printf("Enter a string: ");
    scanf("%s",str);
    // gets(str);
    printf("The string in reverse is: %s" , strrev(str));
    return 0;
}
