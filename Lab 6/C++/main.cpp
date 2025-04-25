#include "Container.h"
#include <iostream>

int main() {
    Container myText;// Створюємо об'єкт контейнера, який буде зберігати рядки

    myText.addLine("Hallo");
    myText.addLine("My name Artem, 17 y.o.");
    myText.addLine("I need 3120301 dollars");
    myText.addLine("This line should be removed at the end");

    std::cout << "--------------------All text--------------------\n";
    myText.showAll();

    std::cout << "\n--------------------Result--------------------" << std::endl;

    //std::cout << "\nLonger string: " << myText.getLongestLine() << std::endl; помилка     повертає вказівник на рядок а не сам рядок
    const Text* longest = myText.getLongestLine();
    if (longest) {
        std::cout << "\nLonger string: " << longest->getLine() << std::endl;
    }
    
    std::cout << "Total number of symbols: " << myText.getTotalLength() << std::endl;
    std::cout << "Percent numbers in text: " << myText.getNumberPercent() << "%\n";

    std::cout << "\n----------------After remove line----------------" << std::endl;
    myText.removeLine(3);
    myText.showAll();

    return 0;
}
