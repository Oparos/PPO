#include "MapPoint.h"


void MapPoint::set_latitude(double latitude){
    this->latitude=latitude;
}
void MapPoint::set_longitude(double longitude){
    this->longitude=longitude;
}
void MapPoint::print() const{
    std::cout<<"Punkt ("<<this->latitude<<","<< this->longitude<<")"<<std::endl;
}
void MapPoint::set_coordinates(const double latitude,const double longitude){
    this->latitude=latitude;
    this->longitude=longitude;
}
double MapPoint::getLatitude()const{
    return this->latitude;
}
double MapPoint::getLongitude()const{
    return this->longitude;
}
MapPoint MapPoint:: closest(MapPoint city1,MapPoint city2)const{
    double odlegosc1=sqrt( pow(this->latitude - city1.getLatitude(),2)+pow(this->longitude - city1.getLongitude(),2));
    double odlegosc2=sqrt( pow(this->latitude - city2.getLatitude(),2)+pow(this->longitude - city2.getLongitude(),2));

    return odlegosc1>odlegosc2?city2:city1;
}

MapPoint MapPoint::half_way_to(MapPoint city)const{
    MapPoint nowy;
    nowy.set_latitude((this->latitude+city.getLatitude())/2);
    nowy.set_longitude((this->longitude+city.getLongitude())/2);
    return nowy;
}
