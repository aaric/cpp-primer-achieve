#pragma once
#include <iostream>
#include <string>

class Ch07Entity
{
  private:
    std::string m_Name;
    int m_Age;
    mutable int m_DebugCount = 0;

  public:
    Ch07Entity(int age) : m_Name("Unknown"), m_Age(age)
    {
    }

    Ch07Entity(const std::string &name) : m_Name(name), m_Age(-1)
    {
    }

    const std::string &GetName() const
    {
        m_DebugCount++;
        return m_Name;
    }
};

void PrintEntity(const Ch07Entity &entity)
{
}

void test_syntax_object()
{
    Ch07Entity e0(18);
    std::cout << e0.GetName() << std::endl;
    Ch07Entity e1("Aaric");
    std::cout << e1.GetName() << std::endl;

    PrintEntity(18);
    PrintEntity(std::string("Aaric"));

    int x = 8;
    auto f = [=]() mutable {
        x++;
        std::cout << x << std::endl;
    };
    f();
} // CPP_PRIMER_ACHIEVE_CH07_PARAMETER_INITIALIZATION_LIST_H
