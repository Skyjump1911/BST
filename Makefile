#Date: 4/19/2025
#Author: Noah Melton
#Description: This is the makefile for the BST assignment
CXX = g++

CXXFLAGS = -Wall -Wextra -g

all: program

program: driver.o class.o
	$(CXX) $(CXXFLAGS) -o program driver.o class.o
driver.o: driver.cpp class.h
	$(CXX) $(CXXFLAGS) -c driver.cpp
class.o: class.cpp class.h
	$(CXX) $(CXXFLAGS) -c class.cpp
clean:
	rm -f *.o~ program
