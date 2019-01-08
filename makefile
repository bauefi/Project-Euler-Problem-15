lattice: main.o lattice.o
	g++  main.o lattice.o -o lattice

main.o: main.cpp
	g++ -Wall -g -c main.cpp

lattice.o: lattice.cpp lattice.h
	g++ -Wall -g -c lattice.cpp

.PHONY : clean

clean :
	-rm *.o $(objects) lattice
