import stdio;
import M;

namespace N {
#ifndef __clang__
	MyInterface::MyInterface()
	{
		printf("impl::MyInterface::MyInterface()\n");	
	}

	MyInterface::~MyInterface()
	{
		printf("impl::MyInterface::~MyInterface()\n");	
	}

	void MyInterface::Print()
	{
		printf("impl::MyInterface::Print()\n");	
	}
#endif
}

