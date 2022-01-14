# cpp-primer-achieve

[![C++](https://img.shields.io/badge/C++-17-brightgreen.svg?style=flat&logo=cplusplus)](https://isocpp.org)
[![CMake](https://img.shields.io/badge/CMake-3.10-brightgreen.svg?style=flat&logo=cmake)](https://cmake.org/cmake/help/v3.10)
[![release](https://img.shields.io/badge/release-0.8.0-blue.svg)](https://github.com/aaric/cpp-primer-achieve/releases)

> C++ Primer Learning.

## 1 VsCode Plugins

> [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)  
> [CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake)  
> [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)  
> [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)  
> [Better C++ Syntax](https://marketplace.visualstudio.com/items?itemName=jeff-hykin.better-cpp-syntax)  
> [C/C++ Themes](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-themes)

## 2 Manual Build

> [Compiler C++ Version Defaults](https://gist.github.com/ax3l/53db9fa8a4f4c21ecc5c4100c0d93c94)

### 2.1 GCC

> `-std=c++17` *Support C++ 17 STD*  
> &emsp;&emsp;`C++98` *199711L*  
> &emsp;&emsp;`C++11` *201103L*  
> &emsp;&emsp;`C++14` *201402L*  
> &emsp;&emsp;`C++17` ***201703L***  
> &emsp;&emsp;`C++20` *202002L - `g++-v8.1.0` Not supported*

### 2.1.1 Install

```bash
# ubuntu
sudo apt install build-essential gdb
g++ --version
gdb --version

# workflow
g++ -E test.cpp -o test.i
g++ -S test.i -o test.s
g++ -c test.s -o test.o
g++ test.o -o test
```

#### 2.1.2 Build

```powershell
cd .\src
g++ -std=c++17 -g main.cpp Tow.cpp -I ../include -Wall -o main
.\main apple banana cherry
```

### 2.2 CMake

> [`-G "MinGW Makefiles"`](https://cmake.org/cmake/help/v2.8.12/cmake.html#section_Generators) *Generate `mingw32-make` makefile*  
> `-DCMAKE_BUILD_TYPE=Debug` *Support debug*

#### 2.2.1 Install

```bash
# ubuntu
sudo apt install cmake
cmake --version
```

#### 2.2.2 Build

```powershell
cd .\build
cmake -G "MinGW Makefiles" -D CMAKE_BUILD_TYPE=Debug ..
mingw32-make
.\main apple banana cherry
```
