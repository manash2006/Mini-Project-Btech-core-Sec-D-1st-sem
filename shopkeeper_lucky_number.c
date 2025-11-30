#include <stdio.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d" , &a);
    if (a%2==0 ){
        printf("its evens");
    }
    else {
        printf("its odd");
    }

    if (a%5==0){
        printf("its divisible by 5");
    }

    else {
        printf("its not divisble by 5") ;
    }
    

        
    

    return 0;
}