#include <Line.h>

    Line::Line(){}
    Line::Line(const double x):Line(x,x){}
    Line::Line(const double x,const double y):_x(x),_y(y){}
    double Line::operator()(const double x)const{return _x*x+_y;}
    double Line::X0()const{return  -_y/_x;}
    void LPrint::operator()(const Line& elo){std::cout << "y = " << elo.getX() << "* x + "<<elo.getY()<<"\tx0 = "<< elo.X0() << std::endl;}
    LArray::LArray(const int a){tab=new Line[a];}
    LArray::~LArray(){delete[]tab;}
    Line& LArray::operator[](const int x)const{return tab[x];}
    void LArray::Add(const Line& add){tab[miejsce]=add;miejsce++;}