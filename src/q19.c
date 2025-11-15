#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        long long fact = 1;
        for(int j = 1; j <= i; j++)
            fact *= j;
        printf("%lld ", fact);
    }

    return 0;
}
