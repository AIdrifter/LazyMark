CFLAGS += -I../include

all:test.demo

test.demo:test
	gcc -o test.demo test ../node/node.o

test:test.c
	gcc -c -o test test.c 

clean:
	rm -rf "*.o" *.demo test
   
