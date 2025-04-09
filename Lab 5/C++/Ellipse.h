#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Figure.h"

namespace _Figure
{
    class Ellipse : public Figure
    {
    protected:
        double a, b; // Піввісі
    public:
        Ellipse(double a, double b);

        // Перевизначення віртуальних методів
        double area() const override;
        double perimeter() const override;
    };
}

#endif
