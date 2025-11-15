#include <stdio.h>
int calculatePower(int base, int exp) {
    int result = 1;
    for(int i=0; i<exp; i++) result *= base;
    return result;
}
int main() {
    int b, e;
    scanf("%d %d", &b, &e);
    printf("Power: %d\n", calculatePower(b, e));
    return 0;
}
