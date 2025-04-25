#ifndef TEXT_H
#define TEXT_H

#include <string>

class Text {
private:
    std::string line;

public:
    Text(const std::string& str); // Конструктор, приймає рядок
    std::string getLine() const;  // Повертає збережений рядок
    size_t getLength() const;     // Повертає довжину рядка
    size_t countNumbers() const;   // Повертає кількість цифр у рядку
};

#endif
