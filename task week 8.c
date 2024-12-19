#include <stdio.h>

// Function declarations
float calculateCommission(char tool, float sales);

int main() {
    char tool;
    float sales, commission;

    printf("Building Tools Commission Calculator\n");
    printf("Enter the tool (A - Hammers, B - Drills, C - Pliers, D - Chisels, E - Screwdrivers): ");
    scanf(" %c", &tool);
    
    printf("Enter the total sales: ");
    scanf("%f", &sales);

    // Call the function to calculate commission
    commission = calculateCommission(tool, sales);

    if (commission >= 0) {
        printf("The commission for tool '%c' with sales %.2f is: %.2f\n", tool, sales, commission);
    } else {
        printf("Invalid input. Please check the tool code or sales amount.\n");
    }

    return 0;
}

// Function to calculate commission based on tool and sales
float calculateCommission(char tool, float sales) {
    float commission = 0.0;

    switch (tool) {
        case 'A': // Hammers
            if (sales >= 250) 
                commission = 0.10 * sales;
            else if (sales > 100) 
                commission = 0.05 * sales;
            else 
                commission = 0;
            break;

        case 'B': // Drills
            if (sales >= 350) 
                commission = 0.20 * sales;
            else if (sales > 50) 
                commission = 0.15 * sales;
            else 
                commission = 0;
            break;

        case 'C': // Pliers
            if (sales >= 350) 
                commission = 0.10 * sales;
            else if (sales > 200) 
                commission = 0.25 * sales;
            else 
                commission = 0;
            break;

        case 'D': // Chisels
            if (sales >= 250) 
                commission = 0.10 * sales;
            else if (sales > 100) 
                commission = 0.05 * sales;
            else 
                commission = 0;
            break;

        case 'E': // Screwdrivers
            if (sales >= 250) 
                commission = 0.10 * sales;
            else if (sales > 100) 
                commission = 0.05 * sales;
            else 
                commission = 0;
            break;

        default:
            commission = -1; // Invalid tool code
    }

    return commission;
}