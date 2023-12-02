#include <iostream>

class Rectangle
{
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double len, double wid) : length(len),
                                        width(wid) {}

    // Member function to calculate the area
    double calculateArea()
    {
        return length * width;
    }

    // Member function to calculate the perimeter
    double calculatePerimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{

    double length, width;
    std::cout << "Input the length of the rectangler: ";
    std::cin >> length;
    std::cout << "Input the width of the rectangle: ";
    std::cin >> width;

    // Create a rectangle object
    Rectangle rectangle(length, width);

    // Calculate and display the area
    double area = rectangle.calculateArea();
    std::cout << "\nArea: " << area << std::endl;

    // Calculate and display the perimeter
    double perimeter = rectangle.calculatePerimeter();
    std::cout << "Perimeter: " << perimeter << std::endl;

    return 0;
}
