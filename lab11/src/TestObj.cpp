#include "TestObj.h"

TestObj::TestObj(){
    std::cout<<"TestObj::TestObj()"<<std::endl;
}
TestObj::TestObj(std::string txt){
    _name=txt;
    std::cout<<"TestObj::TestObj(\""<<txt<<"\")"<<std::endl;
}
TestObj::TestObj(const TestObj& test){
    _name=test._name;
    std::cout<<"TestObj::TestObj(TestObj(\""<<test._name<<"\"))"<<std::endl;
}
TestObj::~TestObj(){
    if(this->_name=="") std::cout<<"~TestObj(): default"<<std::endl;
    else std::cout<<"~TestObj():"<<this->_name<<std::endl;
}

std::string TestObj::name(){
    if(this->_name=="") return "default";
    else return this->_name;
    
}

std::string TestObj::getstr()const {
    return _name;
}