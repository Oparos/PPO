#include "ComplexNumber.h"

//konstruktor domyslny
ComplexNumber::ComplexNumber(){}

//konstruktor z podaynymi wsporzednymi
ComplexNumber::ComplexNumber(const double a,const double b):_x(a),_y(b){}

//metoda wypisujaca
void ComplexNumber::Print()const{
    std::cout<<"("<<_x<<", "<<_y<<")";
}

//metoda wpisujaca
void ComplexNumber::set(double const a,double const b){
    _x=a;
    _y=b;
}

//metoda zwracajaca x-owa wspolrzedna
double ComplexNumber::getX(){
    return _x;
}

//metoda zwracajaca y-owa wspolrzedna
double ComplexNumber::getY(){
    return _y;
}

//metoda liczaca modul z pary liczb podanej jako ComplexNUmber
double ComplexNumber::Abs(ComplexNumber a){
     return sqrt(pow(a.getX(),2)+pow(a.getY(),2));
}

//operator rzutowania
ComplexNumber::operator double()const{
    return Abs(*this);
}

