#include <iostream>
#include "MyString.h"

int main()
{
    MyString obj1("Hello world");
    obj1.Print();
    
    MyString obj2;
    obj2.MyStrcpy(obj1);
    obj2.Print();
    
    std::cout << obj1.MyChr('H') << std::endl;
    
    std::cout << obj2.MyStrlen() << std::endl;
    obj2.MyStrCat(obj1);
    obj2.Print();
    obj2.MyDelChr('H');
    obj2.Print();

    std::cout << obj1.MyStrCmp(obj2) << std::endl;

    MyString obj3 = std::move(obj2);
}
