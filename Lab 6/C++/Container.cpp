#include "Container.h"
#include <iostream>
#include <algorithm>

void Container::addLine(const std::string& str) 
{
    texts.push_back(Text(str));// push_back з бібліотеки вектора 
}

void Container::removeLine(size_t index) 
{
    //texts.erase(texts.begin() + index);
    if (index < texts.size()) // перевірка чі індекс в межах 
    {
        texts.erase(texts.begin() + index);
    }
}

void Container::clearAll() 
{
    texts.clear();
}

const Text* Container::getLongestLine() const
{
    if (texts.empty())
    {
        return nullptr;
    }

    const Text* longest = &texts[0];
    for (size_t i = 0; i < texts.size(); ++i) 
    {
        const Text& t = texts[i];
        if (t.getLength() > longest->getLength()) 
        {
            longest = &t;
        }
    }

    return longest;
}

double Container::getNumberPercent() const 
{
    size_t digit_Count = 0;
    size_t total_Chars = 0;

    for (size_t i = 0; i < texts.size(); ++i)
    {
        digit_Count += texts[i].countNumbers();
        total_Chars += texts[i].getLength();
    }

    if (total_Chars == 0) 
    {
        return 0.0;
    }
    double percent = (double)digit_Count / total_Chars * 100;

    return percent;
}

size_t Container::getTotalLength() const 
{
    size_t total = 0; 

    for (size_t i = 0; i < texts.size(); ++i)
    {  
        total += texts[i].getLength(); 
    }

    return total; 
}

void Container::showAll() const
{
    for (size_t i = 0; i < texts.size(); ++i) 
    {
        std::cout << texts[i].getLine() << std::endl; 
    }
}
