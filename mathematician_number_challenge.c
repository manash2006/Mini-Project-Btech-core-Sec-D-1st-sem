
#include <stdio.h>
int main() {
    int a, i, p = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("%d is even.\n", a);
    } else {
        printf("%d is odd.\n", a);
    }
    for (i = 2; i <= a ; i++) {
        if (a % i == 0) {
            p = p + 1;
            break;
        }
    }
    if (a == 1) {
        printf("Neither prime nor composite");
    } else if (p == 0) {
        printf("prime numer");
    } else {
        printf("Composite");
    }
    return 0;
}
#