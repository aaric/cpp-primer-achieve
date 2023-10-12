#pragma once
#include <iostream>
#include <string>

class Ch07Entity
{
  private:
    std::string m_Name;
    mutable int m_DebugCount = 0;

  public:
    Ch07Entity() : m_Name("Unknown")
    {
    }

    Ch07Entity(const std::string &name) : m_Name(name)
    {
    }

    const std::string &GetName() const
    {
        m_DebugCount++;
        return m_Name;
    }
};

void test_syntax_object()
{
    Ch07Entity e0;
    std::cout << e0.GetName() << std::endl;
    Ch07Entity e1("Aaric");
    std::cout << e1.GetName() << std::endl;
} // CPP_PRIMER_ACHIEVE_CH07_PARAMETER_INITIALIZATION_LIST_H
