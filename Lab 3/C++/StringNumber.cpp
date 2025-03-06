#include "StringNumber.h"
using namespace Artem;

////////////////////
//  Конструктори  //
////////////////////

StringNumber::StringNumber()//за умовчуванням створює порожній рядок  
{
    value = "";
}
StringNumber::StringNumber(const string& val)//числа зберігаються в strin value
{
    value = val;
}
StringNumber::StringNumber(const StringNumber& other)//копіює значення 
{
    value = other.value;
}

//////////////
//  Методи  //
//////////////

size_t StringNumber::length() const 
{
    return value.length();
}
string StringNumber::getValue() const//отримання значення рядка
{
    return value;
}

////////////////////////
//  Перенавантаження  //
////////////////////////

StringNumber StringNumber::operator+(const StringNumber& other) const 
{
    return StringNumber(value + other.value);
}
StringNumber StringNumber::operator-(char number) const 
{
    string newValue;
    for (size_t i = 0; i < value.length(); ++i) 
        {
        if (value[i] != number) 
        {
            newValue += value[i];//записуємо символи, які не є рівними number
        }
    }
    return StringNumber(newValue);
}
