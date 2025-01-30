#ifndef STRING_H
#define STRING_H
#include <string>
#include <algorithm>

using namespace std;

class String {
private:
    string str;

public:
    // Конструктор
    String(const string& inputStr);

    // Метод для отримання рядка
    string getString() const;

    // Метод для обчислення довжини рядка
    size_t getLength() const;

    // Метод для обернення рядка
    std::string reverseString() const;
};

#endif 
