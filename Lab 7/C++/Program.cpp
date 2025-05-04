#include "Program.h"
 
Example::Example(double a, double c, double d)
{
    this->a = a;
    this->c = c;
    this->d = d;
}
 
double Example::getA() const 
{ 
    return a; 
}
double Example::getC() const 
{
    return c; 
}
double Example::getD() const 
{ 
    return d;
}
 
double Example::CalcSqrt(double value) const 
{
    if (value < 0) 
    {
        throw std::runtime_error("ERROR: negative value of square root");
    }
    double sqrt_answ = std::sqrt(value);
    return sqrt_answ;
}
 
double Example::Evaluate() const
{
    double bot = c + a - 1;
    if (bot == 0) {
        throw std::runtime_error("ERROR: divide by zero");
    }
 
    double SQRT = CalcSqrt(42.0 / d);
    double top = 2 * c - d * SQRT;
    double answer = top / bot;
    return answer;
}
 
