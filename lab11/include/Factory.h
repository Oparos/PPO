#pragma once
#include <iostream>
#include <TestObj.h>

 class Factory{
    public:
    //medotoa produkujaca
    static TestObj* produce();
    //metoda tworzaca protoyp
    static void prototype(const TestObj& prot);
    //zmienna nowy obiekt
    static TestObj* tmp;
    //zmienna trzymajaa ilosc w tablicy
    static int liczba;
    //tablica objektow
    static TestObj *tab[5];
    //metoda usuwajaca
    static void erase();
    private:


 };