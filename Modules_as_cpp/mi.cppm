// Interface unit of M
export module M;
import stdio;
export namespace N {
    class MyInterface 
    { 
        public:
            MyInterface() { printf("MyInterface::MyInterface()\n"); };
            ~MyInterface() { printf("MyInterface::~MyInterface()\n"); };
            void Print() { printf("MyInterface::Print()\n"); };
    };
}
