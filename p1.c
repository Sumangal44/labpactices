//Convert Fahrenheit to Centigrade temperature and vice versa.
#include <stdio.h>

// Function prototypes
float fahrenheit_to_celsius(float fahrenheit);
float celsius_to_fahrenheit(float celsius);

int main() {
    int choice;
    float temperature, result;
    char ch=248;
    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        result = fahrenheit_to_celsius(temperature);
        printf("%.2f%cF is equal to %.2f%cC.\n", temperature,ch, result,ch);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        result = celsius_to_fahrenheit(temperature);
        printf("%.2f%cC is equal to %.2f%cF.\n", temperature,ch, result,ch);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// Function to convert Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}
