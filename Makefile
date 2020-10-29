CXX = g++ #compiler
SRC = main.cpp Clases/App/App.cpp Clases/OfertaAcademica/OfertaAcademica.cpp #source files
DATA = preC
EXEC = main #executable name
OBJ = main.o App.o OfertaAcademica.o


all: $(EXEC) #when executed "mingw32-make" without params

$(DATA): $(SRC)
	$(CXX) -c $(SRC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o main