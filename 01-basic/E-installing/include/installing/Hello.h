#pragma once


//windows下编译动态库文件需要加这个 __declspec( dllexport )
class __declspec( dllexport ) Hello
{
private:
    /* data */
public:
    Hello(/* args */);
    ~Hello();

    void print();
};

