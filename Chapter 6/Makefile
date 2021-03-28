CC=g++
CFLAGS=-I.
# DEPS = rectangle.h

# %.o: %.c $(DEPS)
%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: lab6-5.o lab6-5functions.o 
	$(CC) -o lab6-5 lab6-5.o lab6-5functions.o
clean: 
	rm -f *.o lab6-5