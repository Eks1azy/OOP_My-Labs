using System;

class Program
{
    static void Main()
    {
        double x1, y1, x2, y2;

        Console.Write("x1: ");
        x1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("y1: ");
        y1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("x2: ");
        x2 = Convert.ToDouble(Console.ReadLine());
        Console.Write("y2: ");
        y2 = Convert.ToDouble(Console.ReadLine());

        Segment segment = new Segment(x1, y1, x2, y2);

        Console.WriteLine("----------------------------------");
        Console.WriteLine($"X1: {x1} Y1: {y1}");
        Console.WriteLine($"X2: {x2} Y2: {y2}");
        Console.WriteLine("----------------------------------");
        Console.WriteLine($"Segment length is: {segment.length()}");
        Console.WriteLine($"Angle with OX is: {segment.angle()}");
        Console.WriteLine("----------------------------------");

    }
}
