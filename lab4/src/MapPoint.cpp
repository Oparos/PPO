#include "MapPoint.h"

int MapPoint::NMapPoint=0;
MapPoint::MapPoint(){
    _latitude=0;
    _longitude=0;
    NMapPoint++;
}
MapPoint::MapPoint(const double a,const double b){
    _latitude=a;
    _longitude=b;
    NMapPoint++;
}
void MapPoint::print()const {
    std::cout<<"Point :("<<_latitude<<", "<<_longitude<<")"<<std::endl;
}
// void MapPoint::print ()const  { std::cout << "Point: ( "<< _longitude <<", " <<_latitude << ")"<< '\n';}

// MapPoint::MapPoint (const double longitude,const double latitude){
//     NMapPoint++;
//     _longitude = longitude;
//     _latitude = latitude;
// }
// MapPoint::MapPoint(){

//     NMapPoint++;
//     double _longitude;
//     double _latitude;
// }
// MapPoint::MapPoint(const MapPoint &a){
//     NMapPoint++;
//     _latitude = a._latitude;
//     _longitude = a._longitude;
// }
// double MapPoint::distanceVal(MapPoint &porto)const{
//     NMapPoint++;
//     return sqrt(pow(porto._latitude,2)+pow(porto._longitude,2));
// }

// int MapPoint::NMapPoint=0;