#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, originalNum, reversedNum = 0, digit;
    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    // Store the original number
    originalNum = num;
    // Reverse the number using a while loop
    while (num > 0) {
        digit = num % 10;                    // Extract the last digit
        reversedNum = reversedNum * 10 + digit; // Append the digit to reversedNum
        num = num / 10;                      // Remove the last digit
    }

    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
}
