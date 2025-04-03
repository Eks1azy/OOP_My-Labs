#include <iostream>
#include "LetterHeader.h"

using namespace std;
using namespace Artem;

int main()
{
    LetterString value("qwedsadas");

    cout << "Before sorting: " << value.getString() << endl;

    value.sortString();

    cout << "After sorting: " << value.getString() << endl;
    cout << "Length: " << value.getLength() << endl;

    return 0;
}
