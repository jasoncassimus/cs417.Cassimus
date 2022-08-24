//
// File:   assignment1.cpp
// Author: Jason Cassimus
// Purpose:
// Illustrate some of the bad thins that can happen with
// pointers

//https://www.acodersjourney.com/top-20-c-pointer-mistakes/

#include <iostream>
using namespace std;


int main() {
  int* p1, p2; //one is a pointer to an int, and the other is an int
  int n
  n = *p1  // Error: The pointer is unitialized
  //------------------------------------------------------------------
  p1 = &n  // Error: Pointing to uninitialized variable
  //------------------------------------------------------------------
  n = 30;
  p1 = &n;
  p2 = &n; // “Error C2440 ‘=’: cannot convert from ‘int *’ to ‘int’ ”
  //------------------------------------------------------------------
  // Determine size of an array
  const char arr[] = "hello";
  const char *cp = arr;
  printf("Size of arr %lu\n", (int)sizeof(arr));
  printf("Size of *cp %lu\n", (int)sizeof(*cp));  // Error size = 1
  
  
  
  return 0;
  
  
}
