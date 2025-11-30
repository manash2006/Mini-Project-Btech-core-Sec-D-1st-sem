#include <stdio.h>

int main() {
    char word[100];
    int i, length = 0, isPalindrome = 1;
    scanf("%s", word);
    while(word[length] != '\0') {
        length++;
    }
    for(i = 0; i < length / 2; i++) {
        if(word[i] != word[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome)
        printf("Perfect Secret Word");
    else
        printf("Not a Secret Word");

    return 0;
}

