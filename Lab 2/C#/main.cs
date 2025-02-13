using System;

internal class Program
{
    static void Main()
    {
        
        Console.Write("Enter x1: "); double x1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter y1: "); double y1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter x2: "); double x2 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter y2: "); double y2 = Convert.ToDouble(Console.ReadLine());

        LineSegment segment = new LineSegment(x1, y1, x2, y2);

        Console.WriteLine("--------------------------------");
        Console.WriteLine($"X1: {x1} Y1: {y1}");
        Console.WriteLine($"X2: {x2} Y2: {y2}");
        Console.WriteLine("--------------------------------");
        Console.WriteLine($"Segment length is: {segment.Length():F2}");
        Console.WriteLine($"Angle with OX is: {segment.AngleOX():F2} degrees");
        Console.WriteLine("--------------------------------");

    }
}
