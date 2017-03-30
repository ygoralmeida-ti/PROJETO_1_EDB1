#Makefile for "curvas" C++application
#Created by Ygor Almeida 24/03/2017

PROG = curvas

SRCPATH = src/
BINPATH = bin/
BUILDPATH = build/
INCLUDEPATH = include/

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I$(INCLUDEPATH)
CC = g++

OBJS = $(BUILDPATH)main.o $(BUILDPATH)calcBusca.o $(BUILDPATH)vetores.o $(BUILDPATH)buscaSequencial.o $(BUILDPATH)imprime.o 

$(PROG) : $(OBJS)
	$(CC) -o $(BINPATH)$(PROG) $(OBJS)

$(BUILDPATH)main.o : $(SRCPATH)main.cpp $(INCLUDEPATH)calcBusca.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)main.cpp -o $@

$(BUILDPATH)calcBusca.o : $(SRCPATH)calcBusca.cpp $(INCLUDEPATH)calcBusca.h $(INCLUDEPATH)vetores.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)calcBusca.cpp -o $@

$(BUILDPATH)vetores.o : $(SRCPATH)vetores.cpp $(INCLUDEPATH)vetores.h $(INCLUDEPATH)buscaSequencial.h $(INCLUDEPATH)imprime.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)vetores.cpp -o $@

$(BUILDPATH)buscaSequencial.o : $(SRCPATH)buscaSequencial.cpp $(INCLUDEPATH)buscaSequencial.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)buscaSequencial.cpp -o $@

$(BUILDPATH)imprime.o : $(SRCPATH)imprime.cpp $(INCLUDEPATH)imprime.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)imprime.cpp -o $@

clean :
	rm -f core $(BINPATH)$(PROG) $(OBJS)