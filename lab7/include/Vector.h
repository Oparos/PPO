 #pragma once
 #include <iostream>
#include "ComplexNumber.h"

class Vector{
    public:
    //wypisywanie
    void Print()const;

    //metoda ustawiajaca wspolrzedne
    void SetX(const ComplexNumber& a);

    //metoda ustawiajaca wspolrzedne
    Vector &SetY(const double a,const double b);

    //metoda ustawiajaca wspolrzedne
    void SetZ(const double a,const double b);


    //konstruktor domyslny
    Vector();

    //konstruktor konwertujacy z jednym argumentem
    Vector(const double x);

    //metoda zwracajaca pierwsza wspolrzedna
    ComplexNumber& X();


    private:
        ComplexNumber tab[3];
};