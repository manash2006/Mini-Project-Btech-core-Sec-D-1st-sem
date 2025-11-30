#include <stdio.h>
int main() {
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);

    int records[n];
    int totalProfit = 0, totalLoss = 0;

    printf("Enter profit/loss values for each day:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &records[i]);
    }

    for (int i = 0; i < n; i++) {
        if (records[i] > 0)
            totalProfit += records[i];
        else
            totalLoss += -records[i]; 
    }

    int netBalance = totalProfit - totalLoss;

    printf("Total Profit: %d\n", totalProfit);
    printf("Total Loss: %d\n", totalLoss);
    printf("Net Balance: %d\n", netBalance);

    return 0;
}
