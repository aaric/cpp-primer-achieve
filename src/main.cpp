#include <iostream>
#include "func.h"

using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }

    cout << "hello world" << endl;

    cout << "max value: " << max(1, 2) << endl;

    return 0;
}