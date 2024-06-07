#include <stdio.h>

#define SIZE 5  // Define the size of the matrix

int main() {
    int matrix[SIZE][SIZE];  // Declare a 5x5 matrix
    int mainDiagonalSum = 0;  // Initialize sum for the main diagonal
    int secondaryDiagonalSum = 0;  // Initialize sum for the secondary diagonal

    // Input the elements of the 5x5 matrix
    printf("Enter 25 elements of the 5x5 matrix:\n");
    for (int i = 0; i < SIZE; i++) {  // Loop through rows
        for (int j = 0; j < SIZE; j++) {  // Loop through columns
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);  // Read each element
        }
    }

    // Calculate the sum of the main diagonal and the secondary diagonal
    for (int i = 0; i < SIZE; i++) {
        mainDiagonalSum += matrix[i][i];  // Sum of main diagonal elements
        secondaryDiagonalSum += matrix[i][SIZE - i - 1];  // Sum of secondary diagonal elements
    }

    // Display the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);  // Print each element
        }
        printf("\n");
    }

    // Display the sums of the diagonals
    printf("\nSum of the main diagonal: %d\n", mainDiagonalSum);
    printf("Sum of the secondary diagonal: %d\n", secondaryDiagonalSum);

    return 0;
}
