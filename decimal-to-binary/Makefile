CXX = g++
CXXFLAGS = -Wall -std=c++17
######################################
files = *cc
######################################
all: decimal-to-binary

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o decimal-to-binary $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out decimal-to-binary
######################################
