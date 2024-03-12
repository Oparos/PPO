#include "Vector.h"

//metoda ustawiajaca wspolrzedne
Vector& Vector::SetX(const double a,const double b){
    // _X.set(a,b);
    tab[0].set(a,b);
    return *this;
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

//konstrutor z podanymi ComplexNumber
Vector::Vector(ComplexNumber x,ComplexNumber y,ComplexNumber z){
    tab[0]=x;
    tab[1]=y;
    tab[2]=z;
}
Vector::Vector(int i){
    tab[0]=ComplexNumber(i,i);
    tab[1]=ComplexNumber(i,i);
    tab[2]=ComplexNumber(i,i);
}

ComplexNumber& Vector::X(){
    return tab[0];
}







