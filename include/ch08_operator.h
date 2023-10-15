#pragma once
#include <iostream>

class Coordinate
{
private:
    float x, y;

public:
    Coordinate() : x(0), y(0)
    {
    }

    Coordinate(float x, float y) : x(x), y(y)
    {
    }

    float GetX() const
    {
        return x;
    }

    float GetY() const
    {
        return y;
    }

    Coordinate Add(const Coordinate& other)
    {
        return Coordinate(x + other.x, y + other.y);
    }

    Coordinate operator+(const Coordinate& other)
    {
        return Add(other);
    }

    bool operator==(const Coordinate& other)
    {
        return x == other.GetY() && y == other.GetY();
    }
};

std::ostream& operator<<(std::ostream& stream, const Coordinate& c)
{
    stream << c.GetX() << ", " << c.GetY();
    return stream;
}

void test_syntax_operator()
{
    Coordinate c1(1, 1), c2(2, 2);

    Coordinate c3 = c1.Add(c2);
    std::cout << c3 << std::endl;

    Coordinate c4 = c1 + c2;
    std::cout << c4 << std::endl;

    std::cout << (c1 == c2) << std::endl;
}
