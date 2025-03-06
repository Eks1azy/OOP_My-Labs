#ifndef STRINGNUMBER_H
#define STRINGNUMBER_H

#include <iostream>
#include <string>
using namespace std;

namespace Artem
{
    class StringNumber 
    {
    private:
        string value;

    public:
        StringNumber();
        StringNumber(const string& val);
        StringNumber(const StringNumber& other);

        size_t length() const; // Метод обчислення довжини рядка
        string getValue() const; // Метод отримання значення рядка

        // Перевантаження
        StringNumber operator+(const StringNumber& other) const;
        StringNumber operator-(char number) const;
 
    };

}

#endif
