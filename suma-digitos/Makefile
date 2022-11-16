CXX = g++
CXXFLAGS = -Wall -std=c++17
######################################
files = *cc
######################################
all: suma-digitos

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o suma-digitos $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out suma-digitos
######################################
