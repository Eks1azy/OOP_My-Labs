using System.Dynamic;

namespace Artem
{
    public class Example
    {
        private double a;
        private double c;
        private double d;

        public Example(double a, double c, double d)
        {
            this.a = a;
            this.c = c;
            this.d = d;
        }

        public double getA()
        {
            return a;
        }
        public double getC()
        {
            return c;
        }
        public double getD()
        { 
            return d;
        }

        public double CalcSqrt(double value)
        {
            if (value < 0)
            {
                throw new ArgumentException("Error: negative value of square root"); 
            }
            
            double SQRT = Math.Sqrt(value);

            return SQRT;
        }
            
        public double Evaluate()
        {
            if (d == 0)
            {
                throw new DivideByZeroException("Error: divide by zero");
            }

            
            double bot = c + a - 1;
            double top = 2 * c - d * CalcSqrt(42 / d);
            double result = top / bot;

            return result;
        }

    }
}
