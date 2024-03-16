#include <stdio.h>
#include <math.h>


int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = (int)log10(num) + 1;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == originalNum;
}


void printArmstrongInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;

    printf("Enter the upper and lower limt: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);
    printArmstrongInRange(start, end);

    return 0;
}
