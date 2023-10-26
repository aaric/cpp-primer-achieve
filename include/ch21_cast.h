#pragma once
#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base Constructor" << std::endl;
    }
    virtual ~Base()
    {
        std::cout << "Base Destructor" << std::endl;
    }
};

class Entity : public Base
{
public:
    Entity()
    {
        std::cout << "Entity Constructor" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Entity Destructor" << std::endl;
    }
};

void test_syntax_cast()
{
    double d0 = 3.14;
    double d1 = (int)d0 + 10;
    std::cout << d1 << std::endl;
    double d3 = static_cast<int>(d0) + 10;
    std::cout << d3 << std::endl;

    int* ip = new int(66);
    char* ipAddr = reinterpret_cast<char*>(ip);
    std::cout << *ipAddr << std::endl;

    // todo const_cast

    Entity* e0 = new Entity();
    Base* b0 = e0;
    Entity* e1 = dynamic_cast<Entity*>(b0);
    delete e1;
}
