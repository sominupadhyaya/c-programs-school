// show an example of strrev()
int main(){
    char str[20];
    printf("Enter a string: ");
    scanf("%s",str);
    gets(str);
    printf("The string in reverse is: " , strrev(str));
    return 0;
}