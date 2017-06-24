import stdio;
import M;

namespace N {
#ifndef __clang__
	MyInterface::MyInterface()
	{
		printf("MyInterface::MyInterface()\n");	
	}

	MyInterface::~MyInterface()
	{
		printf("MyInterface::~MyInterface()\n");	
	}

	void MyInterface::Print()
	{
		printf("MyInterface::Print()\n");	
	}
#endif
}

