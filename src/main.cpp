#include "ch01_cpp_version.h"
#include <iostream>

// extern int g_two;

int main(int argc, char **argv)
{

    // hello world
    std::cout << "hello world" << std::endl;

    // ch01_cpp_version.h
    // cpp_version();

    // command line parameters
    // command_line_parameters(argc, argv);

    // class
    // test_syntax_class();
    // std::cout << g_two << std::endl;

    // string
    // test_syntax_string();

    // auto & decltype
    // test_syntax_auto();

    // vector
    // test_syntax_vector();

    // std::wstring LPCTSTR   中文
    std::wstring wstr = L"hello 中文";
    // setlocale(LC_ALL, "chs");
    std::wcout << wstr.c_str() << std::endl;

    // wchar_t str[20] = {0};
    // swprintf_s(str, 19, L"%s", wstr.c_str());
    // std::cout << str << std::endl;

    return 0;
}