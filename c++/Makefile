#CPPFLAGS=-Wall -std=c++11 -g -Wextra -Wshadow -Wnon-virtual-dtor -Wold-style-cast -Wcast-align -Wunused -Woverloaded-virtual -pedantic
CPPFLAGS=-Wall -std=c++11 -g -Wextra -Wshadow -Wold-style-cast -Wcast-align -Wunused -Woverloaded-virtual -pedantic
INCLUDE=include
BINARY=bin/patterns
CPP=/usr/bin/g++
SRCS=src/model/Car.cpp src/model/DVI.cpp src/model/HDMI.cpp src/model/SoundSystem.cpp \
     src/model/Brake.cpp src/model/Engine.cpp src/model/Key.cpp \
     src/Singleton.cpp src/Factory.cpp src/Builder.cpp src/Adapter.cpp src/Composite.cpp \
	  src/Decorator.cpp src/Facade.cpp src/Bridge.cpp src/ChainOfResponsibility.cpp \
	  src/Command.cpp src/Mediator.cpp src/Observer.cpp src/State.cpp src/Template.cpp

all:
	$(CPP) -o $(BINARY) -I$(INCLUDE) $(CPPFLAGS) tests/main.cpp $(SRCS)

clean:
	rm -f $(BINARY)
	find . -name '*~' | xargs rm -f
	find . -name '*.swp' | xargs rm -f
