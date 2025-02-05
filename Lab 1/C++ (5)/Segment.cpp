#include "Segment.h"
#include <cmath>

Segment::Segment(double x1, double y1, double x2, double y2)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}


double Segment::Length() const {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double Segment::Angle() const {
    return atan2(y2 - y1, x2 - x1) * 180.0 / 3.14159;
}
