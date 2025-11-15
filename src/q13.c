#include <stdio.h>
long long findFactorial(int n) {
    long long fact = 1;
    for(int i=1; i<=n; i++) fact *= i;
    return fact;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("Factorial: %lld\n", findFactorial(n));
    return 0;
}
