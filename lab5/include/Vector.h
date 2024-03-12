#ifndef dupa
#define dupa
#include <iostream>
#include <utility>
#include "ComplexNumber.h"

class Vector{
    public:
    Vector& SetX(const double a,const double b);
    Vector& SetY(const double a,const double b);
    Vector(Vector &&a);
    Vector();
    Vector(const ComplexNumber x, const ComplexNumber y,const ComplexNumber z);
    void SetZ(const double a,const double b);
    void Print()const;
    ComplexNumber& X();
    ComplexNumber X()const;
    const static Vector *tmp;
    const static Vector* CreateConstVector(const ComplexNumber x,const ComplexNumber y,const ComplexNumber z);
    void static Cleanup();
    private:
    ComplexNumber _X,_Y,_Z;
};

#endif
