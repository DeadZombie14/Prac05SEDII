CXX = g++ #compiler
SRC = main.cpp Clases/App/App.cpp Clases/OfertaAcademica/OfertaAcademica.cpp #source files
EXEC = main #executable name

all: $(EXEC) #when executed "mingw32-make" without params

$(EXEC): $(SOURCES) $(HEADERS)
	$(CXX) $(SRC) -o $(EXEC)