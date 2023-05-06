@echo off

llvm-mingw-20230504-ucrt-x86_64\bin\clang++.exe ^
    ExplorerTap\api.cpp                         ^
    ExplorerTap\dllmain.cpp                     ^
    ExplorerTap\module.cpp                      ^
    ExplorerTap\tap.cpp                         ^
    ExplorerTap\visualtreewatcher.cpp           ^
    -shared -target x86_64-w64-mingw32 -std=c++20 -IExplorerTap\include ^
    -DUNICODE -D_UNICODE -DWINVER=0x0602 -DNTDDI_VERSION=0x0A000006 ^
    -lole32 -loleaut32 -o output.dll
