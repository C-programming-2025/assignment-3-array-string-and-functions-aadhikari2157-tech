#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = 0;
    while(str[len] != '\0') len++;

    int isPalindrome = 1;
    for(int i=0, j=len-1; i<j; i++, j--) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) printf("Palindrome\n");
    else printf("Not a palindrome\n");

    return 0;
}
