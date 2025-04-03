#include "Header.h"

using namespace Artem;

StringBegin::StringBegin() // Конструктор за замовчуванням 
{
    _str = "";
}
StringBegin::StringBegin(const std::string& s) // Конструктор з параметрами
{
    _str = s;
}
StringBegin::StringBegin(const StringBegin& other) // Конструктор копіювання
{
    _str = other._str;
}
StringBegin::~StringBegin()// Деструктор 
{

}

// Методи
int StringBegin::getLength() const 
{
    return _str.length();
}

void StringBegin::setString(const std::string& s) // Це метод для зміни значення
{
    _str = s;
}

std::string StringBegin::getString() const  // Це метод для отримання значення
{
    return _str;
}

