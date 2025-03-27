#ifndef HEADER_H
#define HEADER_H

#include <string>

namespace Artem
{
    class StringBase {
    protected:
        std::string str;
    public:
        StringBase();
        StringBase(const std::string& s);
        virtual ~StringBase();

        int getLength() const;
        std::string getString() const;
    };
}

#endif
