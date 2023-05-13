TARGET:exe

array.o: array.c array.h
	gcc -g -c -I . array.c -o array.o

libarray.a:array.o
	ar rs libarray.a array.o

main.o: main.c main.h
	gcc -g -c -I . main.c -o main.o

exe: main.o libarray.a
	gcc -g main.o -o exe -L . -larray

clean:
	rm -f *.o libarray.a exe