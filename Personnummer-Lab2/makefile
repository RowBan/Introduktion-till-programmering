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

Personnummer-Lab2: $(OBJ)
	$(C) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.o Personnummer-Lab2

run:
	./Personnummer-Lab2