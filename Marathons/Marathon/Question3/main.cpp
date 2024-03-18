#include <iostream>

#include "UniquePointer.hpp"
#include "CA.hpp"
#include "CB.hpp"

using FPTR = void(CA::*)();

void checkCA()
{

    Unique_Pointer<CA> up1 = make_unique<CA>();
    Unique_Pointer<CA> up2 = make_unique<CA>(10);
    Unique_Pointer<CA> up3 = make_unique<CA>(20, 30);

    Unique_Pointer<CA> up4 = up1;

    CA obj;


    up2 = up3;

    Unique_Pointer<CA> up5 = make_unique<CA>(10);

    Unique_Pointer<CA> up6 = (std::move(up3));


    TestMemberCallBack(up1, &CA::fun1);
    TestMemberCallBack(up2, &CA::fun2);

    if(up1)
    {
        std::cout << "UP1 has membership\n";
    }

    else 
    {
        std::cout << "UP1 has no membership\n";
    }
}

void checkCB()
{
    CB obj;

    Unique_Pointer<CB> up1 = make_unique<CB>();
    Unique_Pointer<CB> up2 = make_unique<CB>(10);
    Unique_Pointer<CB> up3 = make_unique<CB>(20, 30);

    Unique_Pointer<CB> up4 = up1;

    up2 = up3;

    Unique_Pointer<CB> up5 = make_unique<CB>(10);
  

    Unique_Pointer<CB> up6 = (std::move(up3));

    TestMemberCallBack(up1, &CB::fun1);
    TestMemberCallBack(up2, &CB::fun2);

    


    if(up1)
    {
        std::cout << "UP1 has membership\n";
    }
    else {
        std::cout << "UP1 has no membership\n";
    }
}

int main()
{
    checkCA();
    std::cout << "=============================\n";
    checkCB();
}