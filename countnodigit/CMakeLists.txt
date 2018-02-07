cmake_minimum_required(VERSION 3.9)
project(countnodigit)

set(CMAKE_CXX_STANDARD 11)

add_executable(countnodigit
        "bin/Debug/countnodigit - Copy.exe"
        bin/Debug/countnodigit.exe
        obj/Debug/main.o
        countnodigit.cbp
        countnodigit.depend
        countnodigit.layout
        DRAGONBALL.ico
        main.c)
