using System;
using Artem;

public class LetterString : StringBegin
{
    //(явний виклик базового конструктора)
    public LetterString(string value) : base(value) { }

    public void Sort_Str()
    {
        string row = GetValue(); // Отримуємо рядок
        char[] arr = row.ToCharArray(); // Перетворюємо на масив символів
        Array.Sort(arr); // Сортуємо масив
        SetValue(new string(arr));
    }
}
