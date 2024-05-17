#include <iostream>
using namespace std;
// Function prototypes
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);
double calculateCircleArea(double radius);
double calculateCylinderArea(double radius, double length);

int main() {
    char choice;
    double base, height, length, width, side, radius;

    // Loop until the user decides to quit
    while (true) {
        // Display menu and prompt user for choice
        std::cout << "Select a shape to calculate the area:\n";
        std::cout << "1. Triangle\n";
        std::cout << "2. Rectangle\n";
        std::cout << "3. Square\n";
        std::cout << "4. Circle\n";
        std::cout << "5. Cylinder\n";
        std::cout << "Enter your choice (1, 2, 3, 4, or 5), or enter 'q' to quit: ";
        std::cin >> choice;

        // Check if user wants to quit
        if (choice == 'q' || choice == 'Q') {
            break;
        }

        // Perform calculation based on user choice
        switch (choice) {
            case '1':
                // Input base and height for triangle
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                std::cout << "Area of the triangle: " << calculateTriangleArea(base, height) << std::endl;
                break;
            case '2':
                // Input length and width for rectangle
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                std::cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << std::endl;
                break;
            case '3':
                // Input side length for square
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                std::cout << "Area of the square: " << calculateSquareArea(side) << std::endl;
                break;
                case '4':
                std::cout << "Enter the radius of the Circle: ";
                std::cin >> radius;
                std::cout << "Area of the Circle: " << calculateCircleArea(radius) << std::endl;
                break;
                case '5':
                std::cout << "Enter the radius of the Cylinder: ";
                std:: cin >> radius;
                std::cout << "Enter the lenght of the Cylinder: ";
                std::cin >> length;
                std::cout << "Area of the Cylinder: "<< calculateCylinderArea(radius, length) << std::endl;
            default:
                // Inform user of invalid input
                std::cout << "If it is Invalid input. Please enter choose again rightly 1, 2, or 3, or 'q' to quit." << std::endl;
                break;
        }
    }

    std::cout << "Program exited. Have a nice day!" << std::endl;

    return 0;
}

// Function definitions
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}
double calculateCircleArea(double radius){
    return 3.14159 * radius * radius;
}
double calculateCylinderArea(double radius, double length){
    return 2 * 3.14159 * radius * length;
}