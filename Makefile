main: main.o funcs.o
	g++ -o main.o
tests: tests.o funcs.o
	g++ -o tests.o
main.o: main.cpp funcs.h
	g++ -c main.cpp
tests.o: tests.cpp funcs.h
	g++ -c tests.cpp
funcs.o: funcs.cpp funcs.h
g++ -c funcs.cpp
clean:
	rm -r test.o funcs.o tests main main.o