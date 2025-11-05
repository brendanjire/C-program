#include <stdio.h>
/*
Brenda njire
ct101/g/26465/25
kirinyaga university
computer science
function to convert to Celsius
*/
float convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9.0;
    return celsius;
}

int main() {
    float fahrenheit = 98.6;
    float celsius = convertToCelsius(fahrenheit);
    printf("%.1f°F is equal to %.1f°C\n", fahrenheit, celsius);
    return 0;
}