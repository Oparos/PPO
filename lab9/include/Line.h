#pragma once
#include <iostream>

class Line{
    public:
        Line();
        Line(const double x);
        Line(const double x,const double y);
        double operator()(const double x)const;
        double X0()const;
        double getX()const{return _x;};
        double getY()const{return _y;};
    private:
        double _x=1.0;
        double _y=1.0;
};

class LPrint{
    public:
        void operator()(const Line& elo);
};

class LArray{
    public:
        LArray(const int a);
        ~LArray();
        Line& operator[](const int x)const;
        void Add(const Line& add);
    private:
        Line *tab=NULL;
        int miejsce=0;
    
};