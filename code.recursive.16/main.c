#include <stdio.h>


int isPalindrome(int num, int reversedNum) {
    if (num == 0)
        return reversedNum;

    reversedNum = reversedNum * 10 + num % 10;

    return isPalindrome(num / 10, reversedNum);
}

int main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);


    int reversed = isPalindrome(num, 0);

    if (reversed == num)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
