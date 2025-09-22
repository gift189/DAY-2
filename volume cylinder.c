#include <stdio.h>

int main() {
    float radius, height, volume;

    // Input radius and height from the user
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate the volume
    volume = 3.14 * radius * radius * height;

    // Display the result
    printf("The volume of the cylinder is: %.2f\n", volume);

    return 0;
}