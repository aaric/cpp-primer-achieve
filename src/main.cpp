#include <iostream>
#include "func.h"

using namespace std;

int main(int argc, char *argv[])
{
    switch (__cplusplus)
    {
    case 199711L:
        cout << "C++98" << endl;
        break;
    case 201103L:
        cout << "C++11" << endl;
        break;
    case 201402L:
        cout << "C++14" << endl;
        break;
    case 201703L:
        cout << "C++17" << endl;
        break;
    case 202002L:
        cout << "C++20" << endl;
        break;
    default:
        cout << "C++XX" << endl;
        break;
    }

    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }

    cout << "hello world" << endl;

    cout << "max value: " << max(1, 2) << endl;

    return 0;
}