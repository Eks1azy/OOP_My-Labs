#ifndef CONTAINER_H
#define CONTAINER_H

#include "Text.h"
#include <vector>

class Container {
private:
    std::vector<Text> texts;// вектор обєкта типу текст

public:
    void addLine(const std::string& str);
    void removeLine(size_t index);
    void clearAll();
    const Text* getLongestLine() const;
    double getNumberPercent() const;
    size_t getTotalLength() const;
    void showAll() const;
};

#endif
