CPPFLAGS=-Wall -std=c++11 -g -Wextra -Wshadow -Wnon-virtual-dtor -Wold-style-cast -Wcast-align -Wunused -Woverloaded-virtual -pedantic
INCLUDE=include
BINARY=bin/patterns
CPP=/usr/bin/g++
SRCS=src/Car.cpp src/Singleton.cpp

all:
	$(CPP) -o $(BINARY) -I$(INCLUDE) $(CPPFLAGS) tests/main.cpp $(SRCS)

clean:
	rm -f $(BINARY)
	find . -name '*~' | xargs rm -f
	find . -name '*.swp' | xargs rm -f
