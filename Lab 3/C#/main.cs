using System;

namespace Artem
{
    class Program
    {
        static void Main(string[] args)
        {
            StringNumber C1 = new StringNumber();
            StringNumber C2 = new StringNumber("12345");
            StringNumber C3 = new StringNumber(C2);

            C2 = C2 - '5';
            C1 = C2 + C3;

            Console.WriteLine("C1: " + C1.GetValue());
            Console.WriteLine("C2: " + C2.GetValue());
            Console.WriteLine("C3: " + C3.GetValue());

            Console.WriteLine("---------------------------");
            Console.WriteLine($"C1: {C1.GetValue()}  Length: {C1.Length()}");
            Console.WriteLine($"C2: {C2.GetValue()}       Length: {C2.Length()}");
            Console.WriteLine($"C3: {C3.GetValue()}      Length: {C3.Length()}");
        }
    }
}
