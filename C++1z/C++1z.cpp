//============================================================================
// Name        : C++1z.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

/*
 * Special Thanks to https://github.com/AnthonyCalandra/modern-cpp-features/blob/master/CPP17.md
 * for providing examples and inspiration about what to demo and try!
 */

#include <stdio.h>
#include <stdlib.h>

// Folding Expression
template<typename... Args>
bool logicalAnd(Args... args) {
    // Binary folding.
    return (true && ... && args);
}

int main(void) {
	puts("Hello World!!!");

	bool b = true;
	bool& b2 = b;
	logicalAnd(b, b2, true); // == true


	return EXIT_SUCCESS;
}
