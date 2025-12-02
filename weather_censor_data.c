/*Problem : Count Positive and Negative Numbers (Weather Sensor Data)
🧩 Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

🖥 Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z

Example 1:

Input
6
3 -2 0 7 -5 8

Output
Positive = 3
Negative = 2
Zero = 1*/


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

