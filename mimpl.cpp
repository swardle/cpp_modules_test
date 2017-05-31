#include <stdio.h>

// implement M
import M;

namespace N {
	A::A()
	{
		printf("A::A()\n");	
	}

	A::~A()
	{
		printf("A::~A()\n");	
	}

	void A::Print()
	{
		printf("A::Print()\n");	
	}
}

