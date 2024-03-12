#pragma once
#include <iostream>
#include <cmath>
class MapPoint{
    public: 
        void set_latitude(double latitude);
        void set_longitude(double longitude);
        void print() const;
        void set_coordinates(const double latitude,const double longitude);
        MapPoint closest(MapPoint city1,MapPoint city2)const;
        double getLatitude()const ;
        double getLongitude()const;
        MapPoint half_way_to(MapPoint city)const;
    private:
        double latitude;
        double longitude;
};
