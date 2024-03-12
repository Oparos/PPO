#include "ComplexNumber.h"
using namespace std;
ComplexNumber::ComplexNumber(){}

ComplexNumber::ComplexNumber(const double a,const double b):_x(a),_y(b){}

void ComplexNumber::Print()const{
     cout<<"("<<_x<<", "<<_y<<")";
}
void ComplexNumber::Setx(const double a,const double b){
    _x=a;
    _y=b;
}