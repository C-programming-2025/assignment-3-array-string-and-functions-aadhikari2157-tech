#include <stdio.h>
int main() {
    char str[100], ch;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    printf("Character '%c' occurs %d times", ch, count);
    return 0;
}
