#ifndef LETTERHEADER_H
#define LETTERHEADER_H

#include "Header.h"
using namespace Artem;

class LetterString : public StringBegin
{
public:
    LetterString(); // Конструктор за замовчуванням
    explicit LetterString(const std::string& s); // Конструктор з параметром
    LetterString(const LetterString& other); // Конструктор копіювання


    void sortString();
};

#endif
