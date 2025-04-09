#include "Ellipse.h"
#include "Circle.h"
#include "Figure.h"

using namespace _Figure;
using namespace std;

void polymorphysm(const _Figure::Figure& figure);

int main()
{
    Ellipse ellipse(4.2, 2.2);
    Circle circle(3.1);


    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Ellipse:  ";
    polymorphysm(ellipse);

    std::cout << "Circle:  ";
    polymorphysm(circle);  

    return 0;
}
