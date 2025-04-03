using System;
using Artem;

class _Main
{
    static void Main(string[] args)
    {
        LetterString LetterString = new LetterString("dcgfba");
        Console.WriteLine($"Похідний рядок: {LetterString.GetValue()}");

        LetterString.Sort_Str();

        Console.WriteLine($"Відсортований рядок: {LetterString.GetValue()}");
        Console.WriteLine($"Довжина рядка: {LetterString.GetLength()}");
    }
}
