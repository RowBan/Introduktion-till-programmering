#Dependency file directory (.h)
IDIR = include

#Object file directory (.o)
ODIR = obj

#Source directory (.cpp)
SRC = src

#Compiler
CXX = g++

#Compiler flags (-I include flag, $(IDIR) directory)
CXXFLAGS = -I$(IDIR)

#Dependencies (.h)
_DEPS = 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

#Object files (.o)
_OBJ = main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

#Compile and assemble all %.cpp + .h files from /src/ and /include/ into %.o files. Place in /obj/
$(ODIR)/%.o: $(SRC)/%.cpp $(IDIR)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

#Link all .o files into executable
$(SRC)/Words-Lab4: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ $(SRC)/Words-Lab4

run:
	$(SRC)/Words-Lab4