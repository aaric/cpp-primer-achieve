#pragma once
#include <cstring>
#include <iostream>

class String
{
private:
    char* m_Buffer;
    unsigned int m_Size;

public:
    String(const char* str)
    {
        m_Size = strlen(str);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, str, m_Size);
        m_Buffer[m_Size] = 0;
    }

    // String(String& other) : m_Buffer(other.m_Buffer), m_Size(other.m_Size)
    // {
    // }

    String(String& other) : m_Size(other.m_Size)
    {
        m_Buffer = new char[m_Size];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    ~String()
    {
        delete[] m_Buffer;
    }

    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& s);
};

std::ostream& operator<<(std::ostream& stream, const String& s)
{
    stream << s.m_Buffer;
    return stream;
}

void test_object_copy()
{
    String s0 = "Aaric";
    std::cout << s0 << std::endl;

    String s1 = s0;
    std::cout << s1 << std::endl;

    std::cout << s1[2] << std::endl;
}
