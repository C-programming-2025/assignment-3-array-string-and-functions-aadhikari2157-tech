#include <stdio.h>
int main() {
    char str[100], ch;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    int count = 0, i = 0;
    while(str[i] != '\0') {
        if(str[i] == ch) count++;
        i++;
    }
    printf("Character '%c' occurs %d times\n", ch, count);
    return 0;
}
