#include <cmath>
#include <iomanip>
#include <iostream>

#ifndef FIGURE_H
#define FIGURE_H

namespace _Figure
{
    // Абстрактний базовий клас
    class Figure
    {
    public:
        // Віртуальні методи — для поліморфізму
        virtual double area() const = 0;// Площа 
        virtual double perimeter() const = 0;// Довжина

        virtual ~Figure() = default;
    };
}

#endif
