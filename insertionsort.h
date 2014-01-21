/*
 *        Project : Insertion Sort Sorting Algorithm
 *        Author : The Alex Camejo
 *        Last Edited : January 21 , 5:14PM
 *        Description: A basic linear insertion algorithm that
 *                     is perhaps the simpliest of "insertion" algorithms
 *                     Best Case: O(n)
 *                     Worst Case: O(n^2)
 *                     Average Case : O(n^2)
 */
#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_
#include <iostream>

template < class T> void linearinsertsort(T array[], int size){
  if(size == 0){
    std::cout << "Error: List is empty" << std::endl;
  }

  int insert;
  for(int i = 1 ; i < size ; i++){
    insert = array[i];   // takes the value to be pulled out
    int j = i - 1;
    while(array[j] > insert && j<=size){ // While the inserted value is less than         
      array[j+1] = array[j];          // the current element and while the
      j--;                            // element isnt at the end of the list
    }                                 // Do :  move larger values up the array
        
    array[j+1] = insert;                // Insert value into correct position
  }
  return;   
}

#endif // _INSERTIONSORT_H_
