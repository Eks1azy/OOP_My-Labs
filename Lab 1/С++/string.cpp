#include "String.h"
using namespace std;

String::String(const string& inputStr) : str(inputStr) {}

string String::getString() const {
    return str;
}

size_t String::getLength() const {
    return str.length();
}

string String::reverseString() const {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}
