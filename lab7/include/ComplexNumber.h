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
     //metoda zwracajaca x-owa wspolrzedna
     double getX();
     //metoda zwracajaca y-owa wspolrzedna
     double getY();
    //metoda liczaca modul z pary liczb podanej jako ComplexNUmber
    static double Abs(ComplexNumber a);

    //operator rzutowania 
    explicit operator double()const;
    private:
        double _x=0.0;
        double _y=0.0;
};