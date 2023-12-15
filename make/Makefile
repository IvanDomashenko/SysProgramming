CXX = g++
CXXFLAGS = -Wall

LIB_SOURCES = calculator.cpp
LIB_OBJECTS = $(LIB_SOURCES:.cpp=.o)

EXECUTABLE = calculator_app

all: $(EXECUTABLE)

$(EXECUTABLE): $(LIB_OBJECTS) main.o
	$(CXX) $(CXXFLAGS) -o $@ main.o $(LIB_OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXECUTABLE) *.o

