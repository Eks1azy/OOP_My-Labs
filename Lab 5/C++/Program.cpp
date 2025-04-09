#include "Ellipse.h"
#include "Circle.h"
#include "Figure.h"

using namespace _Figure;
const double PI = 3.14159265359;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Ellipse::Ellipse(double a, double b)
{
    this->a = a;
    this->b = b;
}


double Ellipse::area() const
{
    return PI * a * b;
}
double Ellipse::perimeter() const
{
    return PI * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Circle::Circle(double r)
{
    this->r = r;
}


double Circle::area() const
{
    return PI * r * r;
}
double Circle::perimeter() const
{
    return 2 * PI * r;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void polymorphysm(const Figure& figure)// Передається за посиланням, не копіюється із за & 
{
    std::cout << "Area: " << figure.area() << ", Perimeter: " << figure.perimeter() << std::endl;
}
