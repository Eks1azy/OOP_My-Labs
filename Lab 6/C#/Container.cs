using System;
using System.Collections.Generic;

public class Container
{
    private List<Text> texts = new List<Text>(); // Список об'єктів Text

    public void AddLine(string str)
    {
        texts.Add(new Text(str));
    }

    public void RemoveLine(int index)
    {
        if (index >= 0 && index < texts.Count)
        {
            texts.RemoveAt(index);
        }
    }

    public void ClearAll()
    {
        texts.Clear();
    }

    public Text GetLongestLine()
    {
        if (texts.Count == 0) return null;

        Text longest = texts[0];
        foreach (Text t in texts)
        {
            if (t.GetLength() > longest.GetLength())
            {
                longest = t;
            }
        }
        return longest;
    }

    public double GetNumberPercent()
    {
        int digitCount = 0;
        int totalChars = 0;

        foreach (Text t in texts)
        {
            digitCount += t.CountNumbers();
            totalChars += t.GetLength();
        }

        return totalChars == 0 ? 0.0 : (double)digitCount / totalChars * 100.0;
    }

    public int GetTotalLength()
    {
        int total = 0;
        foreach (Text t in texts)
        {
            total += t.GetLength();
        }
        return total;
    }

    public void ShowAll()
    {
        foreach (Text t in texts)
        {
            Console.WriteLine(t.GetLine());
        }
    }
}
