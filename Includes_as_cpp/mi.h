#pragma once
#include <stdio.h>
namespace N {
    class MyInterface 
    { 
        public:
            MyInterface() { printf("MyInterface::MyInterface()\n"); };
            ~MyInterface() { printf("MyInterface::~MyInterface()\n"); };
            void Print() { printf("MyInterface::Print()\n"); };
    };
}
