using System;

namespace StringExample
{
    class Program
    {
        static void Main(string[] args) 
        {
            Console.Write("enter line: ");
            string input = Console.ReadLine(); // Передається в StringHandler

            StringHandler stringHandler = new StringHandler(input);

            Console.WriteLine($"entered line: {stringHandler.String()}");
            Console.WriteLine($"length line is: {stringHandler.Length()}");
            Console.WriteLine($"reverse line: {stringHandler.ReverseString()}");
        }
    }
}
