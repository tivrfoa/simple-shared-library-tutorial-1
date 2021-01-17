copy: liblib1.so
	cp liblib1.so "${MY_LOCAL_C_LIB}"

all: liblib1.so

liblib1.so: lib1.o
	gcc -shared -o liblib1.so lib1.o -lm

lib1.o: lib1.h lib1.c
	gcc -o lib1.o -c lib1.c
