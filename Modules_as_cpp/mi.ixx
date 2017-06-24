// Interface unit of M
#include <stdio.h>
module M;
export namespace N {
    class MyInterface 
    { 
        public:
            MyInterface() { printf("mi::MyInterface::MyInterface()\n"); };
            ~MyInterface() { printf("mi::MyInterface::~MyInterface()\n"); };
            void Print() { printf("mi::MyInterface::Print()\n"); };
    };
}
