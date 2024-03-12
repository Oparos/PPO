#include "Vector.h"
using namespace std;

Vector& Vector::SetX(const double a,const double b){
    _X.Setx(a,b);
    return *this;
}
Vector& Vector::SetY(const double a,const double b){
    _Y.Setx(a,b);
    return *this;
}
void Vector::SetZ(const double a,const double b){
    _Z.Setx(a,b);
}

void Vector::Print()const{
    cout<<"[";_X.Print();cout<<", ";_Y.Print();cout<<", ";_Z.Print();cout<<"]"<<endl;
}

ComplexNumber& Vector::X(){
    return _X;
}

const Vector* Vector::CreateConstVector(const ComplexNumber x,const ComplexNumber y,const ComplexNumber z){
    tmp=new const Vector(x,y,z);
    return tmp;
}
Vector::Vector(const ComplexNumber x, const ComplexNumber y,const ComplexNumber z){
    _X=x;
    _Y=y;
    _Z=z;
}
Vector::Vector(){}

ComplexNumber Vector::X()const{
    return _X;
}
const Vector* Vector::tmp;

Vector ::Vector(Vector &&o){
      (std::move(o._X));
      (std::move(o._Y));
      (std::move(o._Z));
      delete &o._X;
}
void Vector::Cleanup(){
    delete tmp;
}


