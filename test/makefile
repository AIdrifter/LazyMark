CFLAGS += -I../include

all:test.deom

test.demo:test
   gcc -o test.demo test ../node/node.o

test:test.c
   gcc -c -o test test.c 

clean:
    @$(shell find ../ -name "*.o" -exec rm {} \;)
   
