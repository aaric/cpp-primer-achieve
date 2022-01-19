#pragma once
#include <iostream>

class Two
{
private:
    int _m;
    int _n;

public:
    Two(int m, int n)
    {
        _m = m;
        _n = n;
    }
    int max();
    void info();
};
