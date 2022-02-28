#include <iostream>

#include "static/Hello.h"

void Hello::print(){
    std::cout<<"hello,static library!"<<std::endl;
    std::cin.get();
}


Hello::Hello(){
    std::cout<<"construct"<<std::endl;
}

Hello::~Hello(){
    std::cout<<"deconstruct"<<std::endl;
}

//调用拷贝构造函数，不调用构造函数，所以不打印construct
void test(Hello h1){
    h1.print();
}

