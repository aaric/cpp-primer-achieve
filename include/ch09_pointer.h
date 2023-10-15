#pragma once
#include <iostream>

class Entity
{
public:
    Entity()
    {
        std::cout << "Entity Created!" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Entity Destroyed!" << std::endl;
    }
};

class ScopedPtr
{
private:
    Entity* m_Ptr;

public:
    ScopedPtr(Entity* ptr) : m_Ptr(ptr)
    {
    }

    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};

void test_syntax_pointer()
{
    Entity* e0 = new Entity();
    delete e0;

    ScopedPtr e1 = new Entity();
}
