#include <iostream>
#include "PasteHeader.h"
using namespace std;
using namespace Artem;

int main() {
    LetterString s("zxcvbnmasdf");

    std::cout << "Before sorting: " << s.getString() << std::endl;

    s.sortString();

    std::cout << "After sorting: " << s.getString() << std::endl;
    std::cout << "Length: " << s.getLength() << std::endl;
    return 0;
}
