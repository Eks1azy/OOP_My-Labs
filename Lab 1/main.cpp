#include <iostream>
#include "String.h"
using namespace std;

int main() {
    string userInput;

    cout << "enter line: ";
    getline(cin, userInput);

    String myString(userInput);

    cout << "entered line: " << myString.getString() << endl;
    cout << "length line is: " << myString.getLength() << endl;
    cout << "reverse line: " << myString.reverseString() << endl;

    return 0;
}
