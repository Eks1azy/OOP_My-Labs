#include <iostream>
#include <iomanip>
#include "ClassLib.h"
using namespace std;

int main() 
{
    double x1, y1, x2, y2;

    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;

    LineSegment segment(x1, y1, x2, y2);

    cout << "--------------------------------" << endl;
    cout << "X1: " << x1 << " Y1: " << y1 << endl;
    cout << "X2: " << x2 << " Y2: " << y2 << endl;
    cout << "--------------------------------" << endl;
    cout << "Segment length is: " << segment.length() << endl;
    cout << "Angle with OX is: " << segment.angleOX() << endl;
    cout << "--------------------------------" << endl;

    return 0;
}
