# Build a executable for each file in ./src with same name but without
# the extension

CXX := g++
CXXFLAGS := -g -Wall -Wextra -std=c++11

INPUTFOLDER := ./src
SOURCES := $(wildcard $(INPUTFOLDER)/*.cpp)
OUTPUTFOLDER := ./bin

RM := rm -rf

all: $(OUTPUTFOLDER)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(OUTPUTFOLDER)/main

$(OUTPUTFOLDER):
	@mkdir -p $@

clean:
	$(RM) $(OUTPUTFOLDER)

build: clean all

run: build
	$(OUTPUTFOLDER)/main
