#include <stdio.h>
int main(){
    int a ;
    int f;
    printf("enter the temperature in celsius: ");
    scanf("%d" , &a);
    f = (a*9/5)+32 ;
    printf("the temperature in fahrenheit is: %d\n", f);
    return 0;
}