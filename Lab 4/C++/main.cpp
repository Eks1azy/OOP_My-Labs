#include <iostream>
#include "LetterHeader.h"

using namespace std;
using namespace Artem;

int main()
{
    LetterString s("zxcvbnmasdf");

    cout << "Before sorting: " << s.getString() << endl;

    s.sortString();

    cout << "After sorting: " << s.getString() << endl;
    cout << "Length: " << s.getLength() << endl;

    return 0;
}
