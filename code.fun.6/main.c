#include <stdio.h>
#include <stdbool.h>


bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void displayPrimes(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the upper and lower limt: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    displayPrimes(start, end);
    return 0;
}
