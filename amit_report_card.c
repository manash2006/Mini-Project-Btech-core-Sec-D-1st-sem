#include <stdio.h>
int main(){
    int n ;
    int a;
    int highest, lowest;
    printf("total number of subjects:");
    scanf("%d" , &n);
    for (int i=1 ; i<=n ; i++){
        printf("enter the marks of subject %d: " , i);
        scanf("%d" , &a);
        if (i == 1) {
            highest = lowest = a;
        } else {
            if (a > highest) highest = a;
            if (a < lowest) lowest = a;
        }
    }
    printf("Highest = %d\n", highest);
    printf("Lowest = %d\n", lowest);
    return 0;
}