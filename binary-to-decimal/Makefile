CXX = g++
CXXFLAGS = -Wall -std=c++17
######################################
files = *cc
######################################
all: binary_to_decimal

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o binary_to_decimal $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out binary_to_decimal
######################################
