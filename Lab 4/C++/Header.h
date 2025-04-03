#ifndef HEADER_H
#define HEADER_H

#include <string>

namespace Artem
{
    class StringBegin 
    {
    private:
        std::string _str;
    protected: //Члени класу, позначені як protected, доступні: Всередині самого класу. Всередині похідних класів.
        void setString(const std::string& s); // Дозволяє змінювати str у похідних класах
    public:
        StringBegin(); // Конструктор за замовчуванням
        StringBegin(const std::string& s); // Конструктор з параметром
        StringBegin(const StringBegin& other); // Конструктор копіювання
        virtual ~StringBegin(); // Віртуальний деструктор

        int getLength() const;
        std::string getString() const;
    };
}

#endif
