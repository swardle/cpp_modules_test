// Interface unit of M
export module M;
import stdio;
export namespace N {
    class MyInterface 
    { 
        public:
            MyInterface() { printf("mi::MyInterface::MyInterface()\n"); };
            ~MyInterface() { printf("mi::MyInterface::~MyInterface()\n"); };
            void Print() { printf("mi::MyInterface::Print()\n"); };
    };
}
