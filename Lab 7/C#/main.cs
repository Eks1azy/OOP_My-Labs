using System;
using Artem;
using System.Collections.Generic;

class Main_
{
    static void Main()
    {
        var expressions = new List<Example>
        {
            new Example(1.0, 2.0, 3.0),
            new Example(2.0, 0.0, -1.0), // Divide by zero
            new Example(2.0, -1.0, 0)  // Negative sqrt
        };

        for (int i = 0; i < expressions.Count; i++)
        {
            try
            {
                double result = expressions[i].Evaluate();
                Console.WriteLine($"Result {i + 1}: {result}");
            }
            catch (Exception e)
            {
                Console.WriteLine($"Error in expression {i + 1}: {e.Message}");
            }
        }
    }
}
