#include <stdio.h>
int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    int result = 1;
    for(int i = 1; i <= exp; i++)
        result *= base;

    printf("%d^%d = %d", base, exp, result);
    return 0;
}
