#pragma once
#include <iostream>
#include <cmath>


namespace MTH{
    class Point{
        public:
        Point(const double a,const double b);
        double getX()const;
        double getY()const;
        private:
            double _x;
            double _y;
    };
    void Print(const MTH::Point& a);
}

namespace MP{
    class Point{
        public:
        Point(const std::string tekst,const double a,const double b);
        Point(const std::string tekst,const MTH::Point&a);
        double getX()const;
        double getY()const;
        std::string getstr()const;
        void operator=(const MTH::Point &a);
        void operator=(const MP::Point &a);
        private:
            std::string label;
            double _longitude;
            double _lattidude;
    };
    void Print(const MP::Point& a);
}