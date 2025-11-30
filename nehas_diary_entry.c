
#include <stdio.h>

int main(){
    int n, i;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("enter the elements %d", i);
        scanf("%d", &a[i]);
    }

    printf("the original arrangement of element is : ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("the reverse arrangement is:");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
