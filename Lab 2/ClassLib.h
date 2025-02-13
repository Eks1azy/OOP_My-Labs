#ifndef CLASS_H
#define CLASS_H

class LineSegment 
{
private:
    double* x1;
    double* y1;
    double* x2;
    double* y2;  

public:
    LineSegment();
    LineSegment(double x1, double y1, double x2, double y2);
    LineSegment(const LineSegment& other);
    LineSegment(LineSegment&& other) noexcept;
    ~LineSegment();

    
    double length() const;
    double angleOX() const;
};

#endif
