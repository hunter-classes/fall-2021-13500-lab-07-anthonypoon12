main: main.o funcs.o
	g++ -o main main.o
tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o
main.o: main.cpp funcs.h
	g++ -c main.cpp
tests.o: tests.cpp funcs.h doctest.h
	g++ -c tests.cpp
funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp
clean:
	rm -f test.o funcs.o tests main main.o
