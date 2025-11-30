#include <stdio.h>
int main() {
    int n, read, count1 = 0, count2 = 0, count3 = 0;

    printf("Enter the number of readings:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter reading %d ", i);
        scanf("%d", &read);
        if (read > 0)
            count1 += 1;
        else if (read == 0)
            count3 += 1;
        else
            count2 += 1;
    }

    printf("Number of Positive Readings %d\n", count1);
    printf("Number of Negative Readings %d\n", count2);
    printf("Number of Zeros %d\n", count3);

    return 0;
}
