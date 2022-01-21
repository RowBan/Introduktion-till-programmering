#Dependency file directory (.h)
IDIR = ../include/

#Object file directory (.o)
ODIR = ../obj

#Source directory (.cpp)
SRC = .

#Compiler
CXX = g++

#Compiler flags (-I include flag, $(IDIR) directory)
CXXFLAGS = -I$(IDIR)

#Dependencies (.h)
_DEPS = is_sorted.h merge.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

#Object files (.o)
_OBJ = main.o is_sorted.o merge.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

#Compile all %.cpp + .h files in workdir and ../include/ into %.o files, place in src/obj/
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

#Link all .o files into executable
Sort-Lab3: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ Sort-Lab3 Merged

run:
	./Sort-Lab3