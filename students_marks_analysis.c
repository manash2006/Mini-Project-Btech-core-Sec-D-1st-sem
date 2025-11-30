#include <stdio.h>
int main(){
    int  n , a;
    float total;
    float avg ;
    total= 0;
    printf("the total number of students");
    scanf("%d" , &n);
    for (int i=1 ; i<=n ; i++){
        printf("enter the marks of student %d: " , i);
        scanf("%d" , &a);
        total = total + a ;
    }
    avg =total / n ;
    printf("the total marks of %d\n" , total);
    printf("the average marks is %.2f\n" , avg);   
    return 0;
}
 