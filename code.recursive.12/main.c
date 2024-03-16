#include <stdio.h>


void printEvenOrOdd(int start, int end, int step) {
    if (start > end)
        return;

    printf("%d ", start);

    printEvenOrOdd(start + step, end, step);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers between 1 and %d are: ", n);
    printEvenOrOdd(2, n, 2);

    printf("\nOdd numbers between 1 and %d are: ", n);
    printEvenOrOdd(1, n, 2);

    return 0;
}
