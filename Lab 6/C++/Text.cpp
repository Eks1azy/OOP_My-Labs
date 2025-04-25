#include "Text.h"

Text::Text(const std::string& str) : line(str) {} // Ініціалізація рядка

std::string Text::getLine() const 
{
    return line;
}

size_t Text::getLength() const
{
    return line.length();
}

size_t Text::countNumbers() const
{
    size_t count = 0;
    for (char ch : line)
    {
        if (ch >= '0' && ch <= '9')  
        {
            ++count;
        }
    }
    return count;
}
