#ifndef PROGRAM_H
#define PROGRAM_H

#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

using namespace std;

class Example 
{
protected:

private:
    double a;
    double c;
    double d;

public:
    Example(double a, double c, double d);

    double getA() const;
    double getC() const;
    double getD() const;

    double CalcSqrt(double value) const;
    double Evaluate() const;
};

#endif
