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
#include <iostream>
#include <fstream>
#include <filesystem>
namespace fs = std::filesystem;

// Folding Expression
template<typename... Args>
bool logicalAnd(Args... args) {
    // Binary folding.
    return (/*true &&*/ ... && args);
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

	printf("\nlet's explore my filesystem!\n");

    // fs::create_directories("sandbox/dir/subdir");
    // std::ofstream("sandbox/file1.txt").put('a');
    // fs::copy("sandbox/file1.txt", "sandbox/file2.txt"); 
    // fs::copy("sandbox/dir", "sandbox/dir2"); 
    // fs::copy("sandbox", "sandbox/copy", fs::copy_options::recursive);
    // fs::remove_all("sandbox");

	fs::path pathToShow( "/home/cmcarthur" );
std::cout << "exists() = " << fs::exists(pathToShow) << "\n"
     << "root_name() = " << pathToShow.root_name() << "\n"
     << "root_path() = " << pathToShow.root_path() << "\n"
     << "relative_path() = " << pathToShow.relative_path() << "\n"
     << "parent_path() = " << pathToShow.parent_path() << "\n"
     << "filename() = " << pathToShow.filename() << "\n"
     << "stem() = " << pathToShow.stem() << "\n"
     << "extension() = " << pathToShow.extension() << "\n";

	return 1;
}
