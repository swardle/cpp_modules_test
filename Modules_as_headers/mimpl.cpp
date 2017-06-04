#include <stdio.h>

// implement M
import M;

namespace N {
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
}

