#include <stdio.h>


float calculateDiameter(float radius);
float calculateCircumference(float radius);
float calculateArea(float radius);

int main() {
    float radius, diameter, circumference, area;


    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);


    diameter = calculateDiameter(radius);
    circumference = calculateCircumference(radius);
    area = calculateArea(radius);


    printf("Diameter of the circle: %.2f\n", diameter);
    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}


float calculateDiameter(float radius) {
    return 2 * radius;
}


float calculateCircumference(float radius) {
    return 2 * 3.14159265358979323846 * radius;
}


float calculateArea(float radius) {
    return 3.14159265358979323846 * radius * radius;
}
