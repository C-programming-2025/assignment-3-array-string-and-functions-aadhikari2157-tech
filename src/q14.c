#include <stdio.h>
float convertTemperature(float celsius) {
    return (celsius * 9/5) + 32;
}
int main() {
    float c;
    scanf("%f", &c);
    printf("Fahrenheit: %.2f\n", convertTemperature(c));
    return 0;
}
