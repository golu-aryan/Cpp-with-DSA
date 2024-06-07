#include <stdio.h>

// Function to print the reverse of a number
void printReverse(int num) {
    // Base case: if the number becomes 0, return
    if (num == 0) {
        return;
    }
    // Print the last digit
    printf("%d", num % 10);
    // Recursive call with the remaining number
    printReverse(num / 10);
}

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Reversed number: ");
    
    // Handle the case where the number is 0
    if (number == 0) {
        printf("0");
    } else {
        // Call the recursive function to print the reverse of the number
        printReverse(number);
    }
    
    printf("\n");

    return 0;
}
