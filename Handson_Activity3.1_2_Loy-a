#include <stdio.h>

int main() {
    float gallons, miles, totalMiles = 0, totalGallons = 0, total, average;
    
    while(1) {
        // Input for gallons
        printf("Enter gallons (-1 to end): ");
        scanf("%f", &gallons);

        // Break the loop if user enters -1
        if (gallons == -1) {
            // Avoid division by zero
            if (totalGallons != 0) {
                average = totalMiles / totalGallons;
                printf("The overall average miles/gallon is: %f\n", average);
            } else {
                printf("No valid input to calculate average miles/gallon.\n");
            }
            break;
        }

        // Input for miles
        printf("Enter miles: ");
        scanf("%f", &miles);

        // Calculate miles/gallon for this tank
        total = miles / gallons;
        printf("The miles/gallon for this tank was: %f\n", total);

        // Accumulate total miles and total gallons
        totalMiles += miles;
        totalGallons += gallons;
    }

    return 0;
}
