#include "Header.h"
using namespace Artem;

StringBase::StringBase() : str("") {}

StringBase::StringBase(const std::string& s) : str(s) {}

StringBase::~StringBase() {}

int StringBase::getLength() const {
    return str.length();
}

std::string StringBase::getString() const {
    return str;
}
