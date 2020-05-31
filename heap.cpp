// heap.cpp
// Gama Aristondo

#include "heap.h"
#include <iostream>
#include <vector>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
  if(vdata.empty()) {
      vdata.push_back(value);
      return;
  }
  vdata.push_back(value);
  fixHeap();
}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){
  vdata.erase(vdata.begin());
  if(!vdata.empty()){
      fixHeap();
  }
}

// Returns the minimum element in the heap
int Heap::top(){
  return vdata.front();
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  return vdata.empty();
}
    
