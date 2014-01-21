CC = g++ -std=c++0x

all:insertionsort.o selectionsort.o bubblesort.o quicksort.o

insertionsort.o:
	$(CC) -c insertionsort.h
selectionsort.o:
	$(CC) -c selectionsort.h
bubblesort.o:
	$(CC) -c bubblesort.h
quicksort.o:
	$(CC) -c quicksort.h
test: 
	$(CC) -o UnitTest UnitTest.cpp  && ./UnitTest

clean:
	rm -rf *.o core && rm -rf *.exe UnitTest