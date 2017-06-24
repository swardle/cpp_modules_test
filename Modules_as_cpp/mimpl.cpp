#include <stdio.h>

// implement M
import M;

namespace N {
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
}

