CC=g++
CFLAGS=-I.
# DEPS = rectangle.h

# %.o: %.c $(DEPS)
%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o maxmin.o getinput.o
	$(CC) -o lab6-9 main.o maxmin.o getinput.o
clean: 
	rm -f *.o lab6-9