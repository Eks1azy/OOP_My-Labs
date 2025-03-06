#include "StringNumber.h"
using namespace Artem;

int main() 
{
    StringNumber C1;                
    StringNumber C2("12345");      
    StringNumber C3 = C2;          

    ////////////////////////////////////////////////////////////////////////
    //  "вирахувати" з об’єкта C2 символ '5';                             //
    //  "скласти"об'єкти C2 та C3 і результат "помістити" до об’єкта C1;  //                             
    ////////////////////////////////////////////////////////////////////////
    
    C2 = C2 - '5';
    C1 = C2 + C3;
    
    cout << "C1: " << C1.getValue() << endl;
    cout << "C2: " << C2.getValue() << endl; 
    cout << "C3: " << C3.getValue() << endl;

    cout << "---------------------------" << endl;
    cout << "C1: " << C1.getValue() << "  Length: " << C1.length() << endl;
    cout << "C2: " << C2.getValue() << "       Lenght: " << C2.length() << endl;
    cout << "C3: " << C3.getValue() << "      Length: " << C3.length() << endl;

    return 0;
}
