# Gama Aristondo

CXX_FLAG = --std=c++11 -g

examheap: examheap.o heap.o
	g++ $(CXX_FLAG) -o examheap examheap.o heap.o

examheap.o: examheap.cpp heap.h
	g++ $(CXX_FLAG) -c examheap.cpp

heap.o: heap.cpp heap.h
	g++ $(CXX_FLAG) -c heap.cpp

clean:
	rm examheap examheap.o heap.o
