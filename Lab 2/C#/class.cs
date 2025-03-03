using System;

public class LineSegment
{
    private double x1;
    private double y1;
    private double x2;
    private double y2;

    //Конструктор за замовчуванням
    public LineSegment()
    {
        x1 = x2 = y1 = y2 = 0;
    }

    //Конструктор із параметрами 
    public LineSegment(double x1, double y1, double x2, double y2)
    {
        this.x1 = x1;
        this.y1 = y1;
        this.x2 = x2;
        this.y2 = y2;
    }

    //Конструктор копіювання
    public LineSegment(LineSegment other)
    {
        x1 = other.x1;
        y1 = other.y1;
        x2 = other.x2;
        y2 = other.y2;
    }

    //Конструктор перенесення 
    public LineSegment(ref LineSegment other)
    {
        x1 = other.x1;
        y1 = other.y1;
        x2 = other.x2;
        y2 = other.y2;

        // Обнуляємо значення в іншому об'єкті
        other.x1 = 0;
        other.y1 = 0;
        other.x2 = 0;
        other.y2 = 0;
    }

    //Деструктор 
    ~LineSegment()
    {

    }

    public double Length()
    {
        return Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2));
    }

    public double AngleOX()
    {
        return Math.Atan2(y2 - y1, x2 - x1) * 180.0 / Math.PI;
    }
}
