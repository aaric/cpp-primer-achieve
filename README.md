# cpp-primer-achieve

[![C++](https://img.shields.io/badge/C++-11-brightgreen.svg?style=flat&logo=cplusplus)](https://isocpp.org)
[![CMake](https://img.shields.io/badge/CMake-3.21.4-brightgreen.svg?style=flat&logo=cmake)](https://cmake.org)
[![release](https://img.shields.io/badge/release-0.4.0-blue.svg)](https://github.com/aaric/cpp-primer-achieve/releases)

> C++ Primer Learning.

## 1 VsCode Plugins

> [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)  
> [CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake)  
> [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)  
> [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)  
> [Better C++ Syntax](https://marketplace.visualstudio.com/items?itemName=jeff-hykin.better-cpp-syntax)  
> [C/C++ Themes](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-themes)

## 2 Manual Build

### 2.1 GCC

> `-std=c++11` *Support C++ 11 STD*

```powershell
cd .\src
g++ -std=c++11 -g main.cpp func.cpp -o main
.\main apple banana cherry
```

### 2.2 CMake

> `-G "MinGW Makefiles"` *Generate `mingw32-make` makefile*  
> `-DCMAKE_BUILD_TYPE=Debug` *Support debug*

```powershell
cd .\build
cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug ..
mingw32-make
.\main apple banana cherry
```
