#include "ClassLib.h"
#include <cmath>

//Конструктор
LineSegment::LineSegment()
{
    // Виділяємо пам'ять для координат
    x1 = new double(0); 
    y1 = new double(0);
    x2 = new double(0);
    y2 = new double(0);
}

//Конструктор із параметрами
LineSegment::LineSegment(double x1, double y1, double x2, double y2)
{
    //Виділяємо пам'ять для координат
    this->x1 = new double(x1);  
    this->y1 = new double(y1);
    this->x2 = new double(x2);
    this->y2 = new double(y2);
}

//Конструктор копіювання, глибоке копіювання
LineSegment::LineSegment(const LineSegment& other)
{
    //Копіюємо значення і виділяємо пам'ять для нових об'єктів
    x1 = new double(*other.x1);
    y1 = new double(*other.y1);
    x2 = new double(*other.x2);
    y2 = new double(*other.y2);
}

//Конструктор перенесення
LineSegment::LineSegment(LineSegment&& other) noexcept
{
    //Переміщення вказівників
    x1 = other.x1;
    y1 = other.y1;
    x2 = other.x2;
    y2 = other.y2;

    //Обнуляємо вказівники в об'єкті, з якого відбувається переміщення
    other.x1 = nullptr;
    other.y1 = nullptr;
    other.x2 = nullptr;
    other.y2 = nullptr;
}

//Деструктор
LineSegment::~LineSegment() 
{
    //Звільняємо пам'ять, якщо вона була виділена
    delete x1;
    delete y1;
    delete x2;
    delete y2;

}

//Обчислення довжини відрізка
double LineSegment::length() const {
    return sqrt(pow(*x2 - *x1, 2) + pow(*y2 - *y1, 2));
}

// Метод для обчислення кута з віссю OX (в градусах)
double LineSegment::angleOX() const {
    return atan2(*y2 - *y1, *x2 - *x1) * 180.0 / 3.14;
}
