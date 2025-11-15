#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a = 0, b = 1, next;
    if(n == 1) printf("0");
    else if(n == 2) printf("0 1");
    else {
        printf("0 1 ");
        for(int i = 3; i <= n; i++) {
            next = a + b;
            printf("%d ", next);
            a = b;
            b = next;
        }
    }

    return 0;
}
