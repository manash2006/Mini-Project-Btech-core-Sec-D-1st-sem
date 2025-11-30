#include <stdio.h>

int main() {
    int n, count1 = 0, count2 = 0; 
    printf("enter the number of students\n");
    scanf("%d", &n);

    int att[n];
    for (int i = 0; i < n; i++) {
        printf("enter the attendance of student %d: ", i + 1);
        scanf("%d", &att[i]);
    }

    for (int i = 0; i < n; i++) {  
        if (att[i] == 0) count1 += 1;
    }

    for (int i = 0; i < n; i++) {
        if (att[i] == 1) count2 += 1;
    }

    printf("the count of absent is %d\n", count1);
    printf("the count of present is %d\n", count2);

    return 0;
}



