#include <iostream>
#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Shape() {
    sideCnt = 3;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}

int Triangle::get_a() {
    return a;
}
int Triangle::get_b() {
    return b;
}

int Triangle::get_c() {
    return c;
}
int Triangle::get_A() {
    return A;
}
int Triangle::get_B() {
    return B;
}
int Triangle::get_C() {
    return C;
}
void Triangle::printInfo(){
    std::cout << "Стороны: a=" << a << ", b=" << b << ", c=" << c << std::endl;
    std::cout << "Углы: A=" << A << ", B=" << B << ", C=" << C << std::endl;
}
