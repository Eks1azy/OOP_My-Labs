using System;

namespace Artem_Figure
{
    public class Ellipse : Figure
    {
        protected double a, b;  // Піввісі

        public Ellipse(double a, double b)
        {
            this.a = a;
            this.b = b;
        }


        public override double Area()
        {
            return Math.PI * a * b;
        }

        public override double Perimeter()
        {
            return Math.PI * (3 * (a + b) - Math.Sqrt((3 * a + b) * (a + 3 * b)));
        }
    }
}
