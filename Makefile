CXX = g++

CXXFLAGS = -c -g -Wall -std=c++17

PROGRAM = main.exe

CPPFILES = main.cpp

all:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

clean:
	rm -f $(PROGRAM) *.o