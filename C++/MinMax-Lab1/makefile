#Compiler
CXX = g++

#Compiler flags
CXXFLAGS = -I.

#Dependencies (empty)
DEPS =

#Objects
OBJ = main.o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

MinMax-Lab1: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean
clean:
	rm -f *.o MinMax-Lab1

run:
	./MinMax-Lab1