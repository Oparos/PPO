#ifndef dupa
#define dupa
#include <iostream>
#include <cmath>
class MapPoint{
    public: 
       void print() const;
       MapPoint();
       MapPoint(const double a,const double b);
       MapPoint(const MapPoint&a);
       static int NMapPoint;
    private:
        double _latitude=0;
        double _longitude=0;
};
#endif
// #ifndef MapPoint_h 
// #define MapPoint_h
// #include <iostream>
// #include <cmath>


// class MapPoint {

// public:
//     MapPoint(const double longitude, const double latitude);
//     MapPoint();
//     MapPoint(const MapPoint &a);
//     void print()const ;
//     double distanceVal(MapPoint &porto)const;
//     static int NMapPoint;

// private: 
//     double _longitude = 0.0;
//     double _latitude = 0.0;

// };
// #endif