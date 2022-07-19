#Makefile
all: add_nbo

add_nbo: add_nbo.o

	g++ -o add_nbo add_nbo.o

add_nbo.o: add_nbo.cpp


clear:
	rm -f *.o

