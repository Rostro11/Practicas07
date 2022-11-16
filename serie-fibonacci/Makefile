CXX = g++
CXXFLAGS = -Wall -std=c++17
######################################
files = *cc
######################################
all: serie-fibonacci

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o serie-fibonacci $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out serie-fibonacci
######################################
