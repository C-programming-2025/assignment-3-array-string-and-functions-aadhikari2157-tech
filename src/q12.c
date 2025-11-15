#include <stdio.h>
int isPalindrome(char str[]) {
    int len = 0;
    while(str[len] != '\0') len++;
    for(int i=0, j=len-1; i<j; i++, j--) {
        if(str[i] != str[j]) return 0;
    }
    return 1;
}
int main() {
    char str[100];
    scanf("%s", str);
    if(isPalindrome(str)) printf("Palindrome\n");
    else printf("Not a palindrome\n");
    return 0;
}
