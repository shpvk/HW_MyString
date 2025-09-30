#include <iostream>
#include "MyString.h"

int main()
{

    MyString obj1("asd");
    MyString obj2("asd");
    MyString obj3("asd");
    MyString obj4("asd");
    

    ++obj1;
    obj1.Print();
    --obj1;
    obj1.Print();
    
    obj1+=" Hello";
    obj1.Print();



    std::string str = "Hello World";
    for(int i = 0; i < str.length(); ++i)
    {
        std::cout << str[i] << ' ';
    }
    std::cout << std::endl;
    int a=51,b=32,c=345;
    
    int x = 50;
    int y = 5555;
    const int* ptr = &x;
    ptr = &y;
    std::cout << *ptr;


    // MyString obj1("Hello world");
    // //obj1.Print();
    
    // MyString obj2("Adsa");
    // MyString obj53("Adsa");
    // MyString obj54("Adsa");
    // //obj2.MyStrcpy(obj1);
    // //obj2.Print();
    
    // std::cout << obj1.MyChr('H') << std::endl;
    
    // std::cout << obj2.MyStrlen() << std::endl;
    // obj2.MyStrCat(obj1);
    // obj2.Print();
    // obj2.MyDelChr('H');
    // obj2.Print();

    // std::cout << obj1.MyStrCmp(obj2) << std::endl;

    // //MyString obj3 = std::move(obj2);
    // //"test"

    //std::cout << "Objects counter: " << MyString::objects_counter << std::endl;

}
