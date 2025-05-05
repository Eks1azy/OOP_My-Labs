using System;

public class Text
{
    private string line;

    public Text(string str)
    {
        line = str; // Ініціалізація
    }

    public string GetLine()
    {
        return line; // Повертає рядок
    }

    public int GetLength()
    {
        return line.Length; // Повертає довжину
    }

    public int CountNumbers()
    {
        int count = 0;
        foreach (char ch in line)
        {
            if (char.IsDigit(ch))
            {
                count++; // Лічильник цифр
            }
        }
        return count;
    }
}
