#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

namespace _Figure
{
    class Circle : public Figure
    {
    protected:
        double r;
    public:
        Circle(double r);

        // Перевизначення методів
        double area() const override;
        double perimeter() const override;
    };
}

#endif
