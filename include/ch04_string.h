#pragma once
#include <iostream>

void test_syntax_string()
{
    std::string line;
    while (std::getline(std::cin, line))
    {
        std::cout << line << std::endl;
    }
    std::string s1 = "hello", s2 = "world";
    std::string s3 = s1 + s2;
    // std::string s4 = "hello" + "world";
    std::cout << s3 << std::endl;
    unsigned char c = '?';
    std::cout << std::ispunct(c) << std::endl;
    std::string raw = R"(<html>
<head>
    <title>hello world</title>
</head>
<body>
    <h1>Test raw string.</h1>
</body>
</html>
)";
    std::cout << raw << std::endl;

    setlocale(LC_ALL, "chs");
    std::wstring wstr = L"hello 中文";
    std::wcout << wstr.c_str() << std::endl;
    wchar_t str[20] = {0};
    swprintf_s(str, 19, L"%s", wstr.c_str());
    std::cout << str << std::endl;
}
