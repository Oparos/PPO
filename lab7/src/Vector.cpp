#include "Vector.h"

//metoda ustawiajaca wspolrzedne
void Vector::SetX(const ComplexNumber& a){
    tab[0]=a;
}

//metoda ustawiajaca wspolrzedne
Vector& Vector::SetY(const double a,const double b){
    tab[1].set(a,b);
    return *this;
}

//metoda ustawiajaca wspolrzedne
void Vector::SetZ(const double a,const double b){
    tab[2].set(a,b);
}

//wypisywanie
void Vector::Print()const{
    std::cout<<"[";tab[0].Print();std::cout<<", ";tab[1].Print();std::cout<<", ";tab[2].Print();std::cout<<"]"<<std::endl;
}


//konstrutor domyslny
Vector::Vector(){}

//metoda zwracajaca pierwsza wspolrzedna
ComplexNumber& Vector::X(){
    return tab[0];
}

//konstruktor konwertujacy z jednym argumentem
Vector::Vector(const double x){
    tab[0]=ComplexNumber(x,x);
    tab[1]=ComplexNumber(x,x);
    tab[2]=ComplexNumber(x,x);
}









