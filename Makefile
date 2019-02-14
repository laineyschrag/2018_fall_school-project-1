lab1: Project1.o Movie.o
	g++ Project1.o Movie.o -o lab1

Project1.o: Project1.cpp Movie.h
	g++ -c Project1.cpp

Movie.o: Movie.cpp Movie.h
	g++ -c Movie.cpp

clean: 
	rm *.o lab1
