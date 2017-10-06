all: functions.o main.o
	gcc -o strtest functions.o main.o

functions.o: functions.c functions.h
	gcc -c functions.c

main.o: main.c functions.h
	gcc -c main.c

clean:
	rm *.o
	rm *~

run: all
	./strtest