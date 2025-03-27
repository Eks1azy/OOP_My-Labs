#ifndef PASTEHEADER_H
#define PASTEHEADER_H

#include "Header.h"
using namespace Artem;

class LetterString : public StringBase {
public:
    LetterString();
    LetterString(const std::string& s);

    void sortString();
};

#endif
