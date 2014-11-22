CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra
EXECUTABLE := fly

$(EXECUTABLE): fly.o Control.o Flight.o
	$(CXX) $(CXXFLAGS) -o $@ $^

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
.PHONY clean:
	rm -f *.o $(EXECUTABLE)
