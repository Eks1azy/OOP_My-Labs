#ifndef STRING_H
#define STRING_H
#include <string>
#include <algorithm>

using namespace std;

class String {
private:
    string str;

public:
    String(const string& inputStr);

    string getString() const;
    size_t getLength() const;
    std::string reverseString() const;
};

#endif 
