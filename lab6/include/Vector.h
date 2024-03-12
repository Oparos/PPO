 #pragma once
 #include <iostream>
#include "ComplexNumber.h"

class Vector{
    public:
    //wypisywanie
    void Print()const;

    //metoda ustawiajaca wspolrzedne
    Vector &SetX(const double a,const double b);

    //metoda ustawiajaca wspolrzedne
    Vector &SetY(const double a,const double b);

    //metoda ustawiajaca wspolrzedne
    void SetZ(const double a,const double b);

    //konstrutor z podanymi ComplexNumber
    Vector(ComplexNumber x,ComplexNumber y,ComplexNumber z);

    ComplexNumber& X();
    Vector(int i);

    //konstruktor domyslny
    Vector();
    private:
        ComplexNumber tab[3];
};