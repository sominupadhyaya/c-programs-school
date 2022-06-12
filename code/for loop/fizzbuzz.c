// print fizz if divisible by 3 buzz if div by 5 and fizzbuzz if 
// div by 3 and 5

#include <stdio.h>
int main () {
int i;
for(i = 0; i <= 100; i++){
if (i%3 == 0 && i%5 == 0)
{
printf("Fizzbuzz \t");
}else if (i%3 == 0)
{
printf("fizz \t");
}else if (i%5 == 0){
printf("buzz \t");
}else{
printf("%d \t" , i);
}
}
return 0;
}