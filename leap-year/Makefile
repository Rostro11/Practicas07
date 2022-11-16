CXX = g++
CXXFLAGS = -Wall -std=c++17
######################################
files = *cc
######################################
all: leap-year

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o leap-year $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out leap-year
######################################
