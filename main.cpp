#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "Square.h"

void printInfo(Shape* s) {
    s->printInfo();
}

int main() {
   Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rectangle rectangle(10, 20);
    Rhombus rhombus(30, 30, 40);
    Square square(20);

    std::cout << "Треугольник:" << std::endl;
    printInfo(&triangle);
    std::cout << std::endl;
    std::cout << "Прямой треугольник:" << std::endl;
    printInfo(&rightTriangle);
    std::cout << std::endl;
    std::cout << "Равнобедренный треугольник:" << std::endl;
    printInfo(&isoscelesTriangle);
    std::cout << std::endl;
    std::cout << "Равносторонний треугольник:" << std::endl;
    printInfo(&equilateralTriangle);
    std::cout << std::endl;
    std::cout << "Четырехугольник:" << std::endl;
    printInfo(&quadrangle);
    std::cout << std::endl;
    std::cout << "Прямоугольник:" << std::endl;
    printInfo(&rectangle);
    std::cout << std::endl;
    std::cout << "Квадрат:" << std::endl;
    printInfo(&square);
    std::cout << std::endl;
    std::cout << "Параллелограмм:" << std::endl;
    printInfo(&parallelogram);
    std::cout << std::endl;
    std::cout << "Ромб:" << std::endl;
    printInfo(&rhombus);
    return 0;
}