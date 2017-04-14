# Build a executable for each file in ./src with same name but without
# the extension

CXX := g++
CXXFLAGS := -g -Wall -Wextra -std=c++11
COMMAND := $(CXX) $(CXXFLAGS) -o

INPUTFOLDER := ./src
SOURCES := $(wildcard $(INPUTFOLDER)/*.cpp)
OUTPUTFOLDER := ./bin

RM := rm -rf

# Recursively-expanded variable for the foreach command

PATHS = $(OUTPUTFOLDER)/$(basename $(notdir $(FILE))) $(FILE)

all: $(OUTPUTFOLDER)
	$(foreach FILE,$(SOURCES),$(COMMAND) $(PATHS);)

$(OUTPUTFOLDER):
	@mkdir -p $@

clean:
	$(RM) $(OUTPUTFOLDER)
