#include <iostream>
#include "Shape.h"

Shape::Shape() : sideCnt(0) {}
int Shape::sideCount() {
    return sideCnt;
}

void Shape::printInfo() {}