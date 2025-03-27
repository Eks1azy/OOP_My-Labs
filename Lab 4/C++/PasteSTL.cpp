#include "PasteHeader.h"
#include <algorithm>
using namespace Artem;

LetterString::LetterString() : StringBase() {}

LetterString::LetterString(const std::string& s) : StringBase(s) {}

void LetterString::sortString() {
    std::sort(str.begin(), str.end());
}
