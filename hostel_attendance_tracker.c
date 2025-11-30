#include <stdio.h>

int main() {
    int A[10][7]; 
    int studentTotal[10] = {0}; 
    int dayTotal[7] = {0};
    int i, j, maxStudent = 0, minDay = 0;
    printf("--- Enter Attendance Data ---\n");
    printf("Enter 1 for Present, 0 for Absent\n\n");
    for(i = 0; i < 10; i++) {
        printf("Enter 7 days attendance for Student %d: ", i + 1);
        for(j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
            studentTotal[i] += A[i][j];
            dayTotal[j] += A[i][j];
        }
    }
    for(i = 1; i < 10; i++) {
        if(studentTotal[i] > studentTotal[maxStudent])
            maxStudent = i;
    }
    for(j = 1; j < 7; j++) {
        if(dayTotal[j] < dayTotal[minDay])
            minDay = j;
    }
    printf("\nWeekly Attendance Summary\n");
    printf("-------------------------\n");
    printf("Total Present Days per Student:\n");
    
    for(i = 0; i < 10; i++)
        printf("Student %d: %d\n", i + 1, studentTotal[i]);

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n", 
            maxStudent + 1, studentTotal[maxStudent]);

    printf("Day with Lowest Overall Attendance: Day %d (Total: %d)\n", 
            minDay + 1, dayTotal[minDay]);
    
    return 0; 
}
