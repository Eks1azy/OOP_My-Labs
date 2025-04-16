using System;
using Artem_Figure;

class Program
{
    //static void Main(string[] args)
    static void Main(string[] args)
    {
        Figure ellipse = new Ellipse(4.2, 2.2);
        Figure circle = new Circle(3.1);

        Console.WriteLine("Ellipse:");
        Polymorphism(ellipse);

        Console.WriteLine("Circle:");
        Polymorphism(circle);
    }

    static void Polymorphism(Figure figure)
    {
        Console.WriteLine($"Area: {figure.Area():F2}, Perimeter: {figure.Perimeter():F2}");// F2 менше знаків
    }
}
