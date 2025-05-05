using System;

class Program
{
    static void Main()
    {
        Container myText = new Container(); // Створюємо об'єкт контейнера

        myText.AddLine("Hallo");
        myText.AddLine("My name Vasya, 17 y.o.");
        myText.AddLine("I need 3120301 dollars");
        myText.AddLine("This line should be removed at the end");

        Console.WriteLine("--------------------All text--------------------");
        myText.ShowAll();

        Console.WriteLine("\n--------------------Result--------------------");

        Text longest = myText.GetLongestLine();
        if (longest != null)
        {
            Console.WriteLine("\nLonger string: " + longest.GetLine());
        }

        Console.WriteLine("Total number of symbols: " + myText.GetTotalLength());
        Console.WriteLine("Percent numbers in text: " + myText.GetNumberPercent() + "%");

        Console.WriteLine("\n----------------After remove line----------------");
        myText.RemoveLine(3); // Видаляємо останній рядок
        myText.ShowAll();
    }
}

