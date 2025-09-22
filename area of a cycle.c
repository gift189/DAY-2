#include <stdio.h>

int main() {
    float radius, area;

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = 3.14 * radius * radius;

    // Display the result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}