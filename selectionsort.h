/*
 *     Project : Straight Selection Sort Sorting Algorithm
 *     Author : The Alex Camejo
 *     Last Edited: January 21 , 2014 5:25PM
 *     Description: A simple straight selection sorting algorithm
 *                  which is perhaps the most simple of the 
 *                  "selection" sorting algorithms
 *                  Best Case: O(n^2)
 *                  Worst Case: O(n^2)
 *                  Average Case: O(n^2)
 */

#ifndef _SELECTIONSORT_H_
#define _SELECTIONSORT_H_
#include <iostream>

template < class T> void straightselectionsort(T array[] , int size){
   if(size == 0){
    std::cout << "Error: List is empty" << std::endl;
   }
        
  for(int i = 0 ; i < size ; i++){
    int min = i;       // min begins as first item in the considered portion

    for (int j = i+1 ; j < size ; j++){
      if(array[j] < array[min] ){ //if an element is smaller than min's
	min = j; //make that item the new min
      }
    }
        
    if(min!=i){ //if min is no longer what it was originally, a new min was found
      T temp = array[i]; // 
      array[i] = array[min];// original min and actual min switched
      array[min]= temp;    //
    }
  }
       
}

#endif //_SELECTIONSORT_H_
