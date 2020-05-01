#Kevin Lobo Makefile Assignment 6 CS3377
#kal160130@utdallas.edu

CXX = g++
CXXFLAGS = 
CPPFLAGS = -Wall -g -I/scratch/perkins/include
LDFLAGS = -L/scratch/perkins/lib
LDLIBS = -lcdk -lcurses

EXECFILE = Assignment6.o

SOURCES := $(wildcard *.cpp)
OBJS = $(SOURCES:.cc=.o)

all: $(EXECFILE)

clean:
  rm -f $(OBJS) $(EXECFILE) *~\#*

$(EXECFILE): $(OBJS)
  $(CXX) -o $@ $(OBJS) $(LDFLAGS) $(LDLIBS)
