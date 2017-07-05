#ifdef __clang__
import stdio;
#endif
import M;

#ifdef _MSC_VER
#include <stdio.h>
#endif

// Use M here. 
import M;

int main()
{
	N::MyInterface a{}; // OK.
}
