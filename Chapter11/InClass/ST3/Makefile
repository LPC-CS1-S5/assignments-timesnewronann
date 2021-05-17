CC=g++
CFLAGS=-I.
DEPS = students.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: struct3.o functions.o 
	$(CC) -o struct3 struct3.o functions.o 
clean:
	/bin/rm -rf *.o struct3