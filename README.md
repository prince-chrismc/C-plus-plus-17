# C-plus-plus-17
This is an exploration repository to dabble with C++1z using the g++-7 compiler running Linux Mint 18.1

## Attribution
Thank you to [this](https://github.com/AnthonyCalandra/modern-cpp-features/blob/master/CPP17.md) pages contributors.

## System Setup
1. Installing the latest compilers
```bash
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt-get update
sudo apt-get install gcc-7
sudo apt-get install g++-7
```
2. Install Eclipse C++ (Im using Oxygen)
3. File -> New -> Project -> C++ -> C++ Project -> Next -> Makefile Project -> Hello World -> Linux GCC -> Finish
4. Modify Makefile
```Makefile
$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)
====================================================
$(TARGET):	$(OBJS)
	g++-7 -o $(TARGET) $(OBJS) $(LIBS)
```
5. Build project
