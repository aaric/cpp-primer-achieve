#pragma once
#include <iostream>
#include <memory>

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

    void Print()
    {
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

    {
        ScopedPtr e1 = new Entity();
    }

    {
        std::unique_ptr<Entity> e2 = std::make_unique<Entity>();
        e2->Print();
    }

    {
        std::shared_ptr<Entity> e3;
        {
            std::shared_ptr<Entity> e4 = std::make_shared<Entity>();
            e3 = e4;
        }
    }

    {
        std::weak_ptr<Entity> e5;
        {
            std::shared_ptr<Entity> e6 = std::make_shared<Entity>();
            e5 = e6;
        }
    }
}
