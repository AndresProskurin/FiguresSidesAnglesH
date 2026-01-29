#pragma once    

class Shape {

    protected:
        int sideCnt{};
    public:
        Shape();
        int sideCount();
        
        virtual void printInfo();
    };
