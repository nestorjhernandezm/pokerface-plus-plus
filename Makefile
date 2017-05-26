# Build a executable for each file in ./src with same name but without
# the extension

CXX := g++
CXXFLAGS := -g -Wall -Wextra -std=c++11

GTESTFOLDER := /usr/lib
LIBS := -L$(GTESTFOLDER) -lpthread -lgtest -lgtest_main

INCLUDES := -I./ -I/usr/include

INPUTFOLDER := ./src
TESTFOLDER := ./test
SOURCES := $(wildcard $(INPUTFOLDER)/*.cpp)
TESTSOURCES := $(wildcard $(TESTFOLDER)/*.cpp)
OUTPUTFOLDER := ./bin

RM := rm -rf

all: $(OUTPUTFOLDER) test
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(OUTPUTFOLDER)/main
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(TESTSOURCES) \
	-o $(OUTPUTFOLDER)/pokerface_plus_plus_tests $(LIBS)


$(OUTPUTFOLDER):
	@mkdir -p $@

clean:
	$(RM) $(OUTPUTFOLDER)

build: clean all

run: build
	$(OUTPUTFOLDER)/main
