#ifndef HEADER_H
#define HEADER_H

#include <string>

namespace Artem
{
    class StringBegin 
    {
    private:
        std::string str;
    protected:
        void setString(const std::string& s); // Дозволяє змінювати str у похідних класах
    public:
        StringBegin(); // Конструктор за замовчуванням
        explicit StringBegin(const std::string& s); // Конструктор з параметром
        StringBegin(const StringBegin& other); // Конструктор копіювання
        virtual ~StringBegin(); // Віртуальний деструктор

        int getLength() const;
        std::string getString() const;
    };
}

#endif
