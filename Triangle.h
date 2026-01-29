#pragma once
#include "Shape.h"

class Triangle : public Shape {

    private:
        int a;
        int b;
        int c;    
        int A;
        int B;
        int C;

    public:
        Triangle(int a, int b, int c, int A, int B, int C);
    
    public:
        int get_a();
        int get_b();
        int get_c();
        int get_A();
        int get_B();
        int get_C();

        void printInfo() override;

};
