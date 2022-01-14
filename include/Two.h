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
        this->_m = m;
        this->_n = n;
    }
    int max();
    void info();
};
