// heap.h
// Binary heap tree header file for CS 24 lab
// Diba Mirza

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

class Heap{

 public:
    void push(int value);     // insert value; //duplicates are allowed
    void pop(); // delete the min element 
    int top();
    bool empty();
    
 private:
    std::vector<int> vdata; //store the binary heap tree as a dynamic array
    
    void fixHeap(){
        for(int i = 1; i < vdata.size(); i++){
            if(vdata.at(i) < vdata.at((i-1)/2)){
                int temp = vdata.at(i);
                vdata.at(i) = vdata.at((i-1)/2);
                vdata.at((i-1)/2) = temp;
            }
        }
    }
};

#endif
