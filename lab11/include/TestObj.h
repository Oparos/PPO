#pragma once
#include <string>
#include <iostream>

class TestObj{
    public:
    //konstruktor
    TestObj();
    //konstruktor
    TestObj(std::string txt);
    //konstruktor
    TestObj(const TestObj& test);
    //metoda pobierajaca imie
    std::string name();
    //metoda pobierajaca imie
    std::string getstr()const;
    //destruktor
    ~TestObj();
    private:
    std::string _name="";
};