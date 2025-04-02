#include "LetterHeader.h"
#include <algorithm>

using namespace Artem;

LetterString::LetterString() : StringBegin() {} // Виклик конструктора за замовчуванням базового класу

LetterString::LetterString(const std::string& s) : StringBegin(s) {} // Виклик конструктора з параметром базового класу

LetterString::LetterString(const LetterString& other) : StringBegin(other) {} // Конструктор копіювання



// Сортування 

void LetterString::sortString()
{
    std::string row = getString(); // Отримуємо рядок
    std::sort(row.begin(), row.end()); // Сортуємо
    setString(row); // Оновлюємо через protected метод
}
