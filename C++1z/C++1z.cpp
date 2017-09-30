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

// Folding Expression
template<typename... Args>
bool logicalAnd(Args... args) {
    // Binary folding.
    return (true && ... && args);
}

// constexpr lambda
constexpr auto add = [] (int x, int y) {
  auto L = [=] { return x; };
  auto R = [=] { return y; };
  return [=] { return L() + R(); };
};

int main(void) {
	printf("Hello World!!!\n");

	printf("Trying folding expressions...\n");
	bool b = true;
	bool& b2 = b;
	bool result = logicalAnd(b, b2, true); // == true
	if(logicalAnd(result))
	{
		printf("result == true\n");
	}
	else
	{
		printf("result == false\n");
	}

	if(add(1, 2)() == 3)
	{
		printf("1 + 2 == 3 =D\n");
	}

	return 1;
}
