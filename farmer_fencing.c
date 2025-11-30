#include <stdio.h>

int main(){
    int a ;
    int b ;
    int Area ;
    int Perimeter ;

    printf("enter the length: ");
    scanf("%d", &a);

    printf("enter the breadth: ");
    scanf("%d", &b);

    Area = a * b ;
    Perimeter = 2 * (a + b) ;

    printf("area = %d\n", Area);
    printf("perimeter = %d\n", Perimeter);

    return 0;
}