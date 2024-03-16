#include <stdio.h>

int findMaximum(int numbers[], int count);
int findMinimum(int numbers[], int count);

int main() {
    int count, i;


    printf("Enter the count of numbers: ");
    scanf("%d", &count);


    int numbers[count];
    printf("Enter %d numbers:\n", count);
    for (i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }


    int maximum = findMaximum(numbers, count);
    int minimum = findMinimum(numbers, count);


    printf("Maximum number: %d\n", maximum);
    printf("Minimum number: %d\n", minimum);

    return 0;
}


int findMaximum(int numbers[], int count) {
    int max = numbers[0];
    for (int i = 1; i < count; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}


int findMinimum(int numbers[], int count) {
    int min = numbers[0];
    for (int i = 1; i < count; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}
