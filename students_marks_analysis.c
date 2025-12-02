/*Question: The Student’s Marks Analyzer

💡 Problem Story:
A teacher wants to analyze the marks of her students in a test.
She asks you to write a program that stores the marks of n students and finds out:

The total marks obtained by all students.

The average marks of the class.

Can you help the teacher by writing the program?
Task:

Write a program that takes the number of students and their marks as input and calculates:

The total marks

The average marks

Input Format:

The first line contains one integer n — number of students.

The next line contains n integers — marks of each student.

📤 Output Format:

Print two lines:

First line: "Total Marks = <value>"

Second line: "Average Marks = <value>"
Example 1:

Input:
5
80 70 90 85 75

Output:
Total Marks = 400
Average Marks = 80.00*/


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

 
