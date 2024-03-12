#pragma once
#include <iostream>
#include <cmath>


class ComplexNumber{
    public:
    //przyjazn z klasa vector
    friend class Vector;

    //konstruktor domyslny
    ComplexNumber();
    //konstruktor z podaynymi wsporzednymi
    ComplexNumber(const double a,const double b);
    //metoda wypisujaca
     void Print()const;
     //metoda ustawiacjaca wsporzedne
     void set(double const a,double const b);

    explicit operator double()const;

    const static double Abs(const ComplexNumber &a);
    private:
        double _x=0.0;
        double _y=0.0;
};