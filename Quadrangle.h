#pragma once
#include "Shape.h"

class Quadrangle : public Shape {

    private:
        int a;
        int b;
        int c;
        int d;    
        int A;
        int B;
        int C;
        int D;

    public:
        Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    
    public:
        int get_a();
        int get_b();
        int get_c();
        int get_d();
        int get_A();
        int get_B();
        int get_C();
        int get_D();

        void printInfo() override;

};
