#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int isPalindrome = 1; // assume it is a palindrome
    for(int i = 0, j = len - 1; i <=j; i++, j--) {
        if(str[i] != str[j]) {
            isPalindrome = 0; // not a palindrome
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

