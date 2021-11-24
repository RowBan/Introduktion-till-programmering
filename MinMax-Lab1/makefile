#Compiler
C = g++

#Compiler flags
CFLAGS = -I.

#Dependencies (empty)
DEPS =

#Objects
OBJ = main.o

%.o: %.c $(DEPS)
	$(C) -c -o $@ $< $(CFLAGS)

MinMax-Lab1: $(OBJ)
	$(C) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.o MinMax-Lab1

run:
	./MinMax-Lab1