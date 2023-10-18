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

void test_virtual_destructor()
{
    std::cout << "# b0" << std::endl;
    Base* b0 = new Base();
    delete b0;

    std::cout << "# e0" << std::endl;
    Entity* e0 = new Entity();
    delete e0;

    std::cout << "# e1" << std::endl;
    Base* e1 = new Entity();
    delete e1;
}
