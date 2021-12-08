#Dependency file directory (.h)
IDIR =../include/

#Object file directory (.o)
ODIR=ofiles

#Compiler constant
CXX=g++

#Compiler flags constant (-I include flag, $(IDIR) directory)
CXXFLAGS=-I$(IDIR)

#Dependencies (.h)
_DEPS = sort1.h sort2.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

#Object files (.o)
_OBJ = main.o sort1.o sort2.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

#All .cpp files into .o files, place in src/ofiles/
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

Sort-Lab3: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ Sort-Lab3
run:
	./Sort-Lab3