#include "MapPoint.h"


MTH::Point::Point(const double a,const double b):_x(a),_y(b){}

double MTH::Point::getX()const{return _x;}

double MTH::Point::getY()const{return _y;}

void MTH::Print(const MTH::Point& a){
    std::cout<<"[MTH::Point] X="<<a.getX()<< " Y="<<a.getY()<<std::endl;
}

MP::Point::Point(const std::string tekst,const double a,const double b):label(tekst),_longitude(a),_lattidude(b){}

double MP::Point::getX()const{return _longitude;}

double MP::Point::getY()const{return _lattidude;}

std::string MP::Point::getstr()const{return label;}

void MP::Print(const MP::Point& a){
    std::cout<<"[MP::Point]"<<a.getstr()<<": X="<<a.getX()<< " Y="<<a.getY()<<std::endl;
}

MP::Point::Point(const std::string tekst,const MTH::Point&a):MP::Point(tekst,a.getX(),a.getY()){}

void MP::Point::operator=(const MTH::Point &a){
    _longitude=a.getX();
    _lattidude=a.getY();
}

void MP::Point::operator=(const MP::Point &a){
    if(&a==this)
     std::cout<<"[MP::Warning] Discarding self-assignment"<<std::endl;
     else{
        label=a.getstr();
        _longitude=a.getX();
        _lattidude=a.getY();
     }
}


