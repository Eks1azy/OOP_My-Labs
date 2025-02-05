#ifndef SEGMENT_H
#define SEGMENT_H

class Segment {
private:
    double x1, y1, x2, y2;
public:
    Segment(double x1, double y1, double x2, double y2);

    double Length() const;
    double Angle() const;
};

#endif
