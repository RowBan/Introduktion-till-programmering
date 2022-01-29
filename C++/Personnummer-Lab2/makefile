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

Personnummer-Lab2: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean
clean:
	rm -f *.o Personnummer-Lab2

run:
	./Personnummer-Lab2