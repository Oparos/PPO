#pragma once
#include <iostream>

class ComplexNumber{
    public:
    friend class Vector;
    ComplexNumber();
    ComplexNumber(const double a,const double b);
    void Setx(const double a,const double b);

    
    void Print()const;
    private:
        double _x=0;
        double _y=0;
};