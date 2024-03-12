#include "ComplexNumber.h"


//konstruktor domyslny
ComplexNumber::ComplexNumber(){}

//konstruktor z podaynymi wsporzednymi
ComplexNumber::ComplexNumber(const double a,const double b):_x(a),_y(b){}

//metoda wypisujaca
void ComplexNumber::Print()const{
    std::cout<<"("<<_x<<", "<<_y<<")";
}

//metoda wypisujaca
void ComplexNumber::set(double const a,double const b){
    _x=a;
    _y=b;
}

const double ComplexNumber::Abs(const ComplexNumber &a){
    return sqrt(pow(a._x,2)+pow(a._y,2));
}

ComplexNumber::operator double()const {
    return Abs(*this);
}


