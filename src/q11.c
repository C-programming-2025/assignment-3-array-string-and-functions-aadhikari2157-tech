#include <stdio.h>

double calculateAverage(int arr[], int size) {
    if (size == 0) return 0;  

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (double)sum / size;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    double avg = calculateAverage(numbers, size);
    printf("Average: %.2f\n", avg);

    return 0;
}
