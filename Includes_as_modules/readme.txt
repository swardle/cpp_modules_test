This test just shows what errors a normal .CPP and .H system would have. 

I was supised with the lack of error messages when having the same function in a module on vs2017 with include you would have a error message in the compiler. 
I guess with modules things are different somehow.  


Current errors vs2017

mimpl.cpp(6): error C2084: function 'N::MyInterface::MyInterface(void)' already has a body
c:\github\cpp_modules_test\includes_as_modules\mi.h(7): note: see previous definition of '{ctor}'
mimpl.cpp(11): error C2084: function 'N::MyInterface::~MyInterface(void)' already has a body
c:\github\cpp_modules_test\includes_as_modules\mi.h(8): note: see previous definition of '{dtor}'
mimpl.cpp(16): error C2084: function 'void N::MyInterface::Print(void)' already has a body
c:\github\cpp_modules_test\includes_as_modules\mi.h(9): note: see previous definition of 'Print'

