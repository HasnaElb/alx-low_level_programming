#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int maxPalindrome = 0;
    int num1, num2;

    // Loop through all 3-digit numbers
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            if (isPalindrome(product) && product > maxPalindrome) {
                maxPalindrome = product;
                num1 = i;
                num2 = j;
            }
        }
    }

    // Save the result in the file "102-result"
    FILE *file = fopen("102-result", "w");
    fprintf(file, "%d", maxPalindrome);
    fclose(file);

    return 0;
}
