#include <stdio.h>


// Function to check if 'num' is a multiple of 'x'
void multiple(int num, int x) {		
    // Check if num is divisible by x
    if (num % x == 0) {
        printf("%d is a multiple of %d.\n", num, x);
    } else {
        printf("%d is not a multiple of %d.\n", num, x);
    }
	

}


int main() {
    int num, x;

    // Prompt user to enter the number and the divisor
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the integer to check if it's a multiple of: ");
    scanf("%d", &x);

    // Call the 'multiple' function to check the condition
    multiple(num, x);

    return 0;
}
