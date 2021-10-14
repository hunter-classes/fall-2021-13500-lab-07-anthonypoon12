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
unindent: unindent.o funcs.o
	g++ -o unindent unindent.o funcs.o
unindent.o: unindent.cpp funcs.h
	g++ -c unindent.cpp
indent: indent.o funcs.o
	g++ -o indent indent.o funcs.o
clean:
	rm -f tests.o funcs.o tests main main.o unindent unindent.o indent indent.o
