#include "Header.h"

using namespace Artem;

StringBegin::StringBegin() // Конструктор за замовчуванням 
{
    str = "";
}

StringBegin::StringBegin(const std::string& s) // Конструктор з параметрами
{
    str = s;
}

StringBegin::StringBegin(const StringBegin& other) // Конструктор копіювання
{
    str = other.str;
}


StringBegin::~StringBegin()// Деструктор 
{

}

// Методи

int StringBegin::getLength() const 
{
    return str.length();
}

void StringBegin::setString(const std::string& s) // Це метод для зміни значення
{
    str = s;
}

std::string StringBegin::getString() const  // Це метод для отримання значення
{
    return str;
}
