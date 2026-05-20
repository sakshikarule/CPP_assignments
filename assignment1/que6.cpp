#include <iostream>
using namespace std;

// Inline function to calculate the area of a triangle
inline float CalculateArea(float base, float height) {
    return 0.5f * base * height;
}

int main() {
    float base, height;

    // Get input from the user
    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Call the inline function
    float area = CalculateArea(base, height);

    // Print the result
    cout << "The area of the triangle is: " << area << "\n";

    return 0;
}

