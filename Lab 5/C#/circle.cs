using System;

namespace Artem_Figure
{
    public class Circle : Figure
    {
        protected double r; // Радіус

        public Circle(double r)
        {
            this.r = r;
        }

        public override double Area()
        {
            return Math.PI * r * r;
        }

        public override double Perimeter()
        {
            return 2 * Math.PI * r;
        }


    }
}

