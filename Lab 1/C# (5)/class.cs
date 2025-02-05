using System;

class Segment
{
    private double x1, y1, x2, y2;

    public Segment(double x1, double y1, double x2, double y2)
    {
        this.x1 = x1;
        this.y1 = y1;
        this.x2 = x2;
        this.y2 = y2;
    }

    public double length()
    {
        return Math.Sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    }

    public double angle()
    {
        return Math.Atan2(y2 - y1, x2 - x1) * 180.0 / Math.PI;
    }
}
