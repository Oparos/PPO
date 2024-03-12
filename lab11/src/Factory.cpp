#include "Factory.h"
TestObj* Factory::tmp=NULL;
int Factory::liczba=0;
TestObj *Factory::tab[5];

TestObj* Factory::produce(){
    if(tmp==NULL) tmp=new TestObj();
    else  tmp=new TestObj(*tmp);
    tab[liczba]=tmp;
    liczba++;
    return tmp;
}

void Factory::prototype(const TestObj& prot){
    // TestObj * 
    tmp=new TestObj(prot);
    tab[liczba]=tmp;
    liczba++;
}

void Factory::erase(){
    for(int i=0;i<5;i++)
    delete tab[i];
}

