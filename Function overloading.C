#include <stdio.h>
#include <math.h>

// Function to calculate area of a circle
float area_circle(float radius) {
    return M_PI * radius * radius;
}

// Function to calculate area of a triangle
float area_triangle(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate area of a rectangle
float area_rectangle(float length, float width) {
    return length * width;
}

int main() {
    int choice;
    float radius, base, height, length, width;

    printf("Choose the shape:\n");
    printf("1. Circle\n");
    printf("2. Triangle\n");
    printf("3. Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of circle is %.2f sq.units\n", area_circle(radius));
            break;
        case 2:
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            printf("Area of triangle is %.2f sq.units\n", area_triangle(base, height));
            break;
        case 3:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            printf("Area of rectangle is %.2f sq.units\n", area_rectangle(length, width));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}