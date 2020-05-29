// heap.cpp
// Gama Aristondo

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
  if(vdata.empty()) {
      vdata.push_back(value);
      return;
  }
  vdata.push_back(value);
  int size = vdata.size();
  int parent = (size-1)/2;
  if(vdata.at(size-2) < vdata.at(parent)) {
      int temp = vdata.at(parent);
  }
}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){

}

// Returns the minimum element in the heap
int Heap::top(){
  return 0;
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  return vdata.empty();
}
    
