/*
 *       Project : Bubblesort sorting algorithm
 *       Author : The Alex Camejo
 *       Last Edited  : Janurary 21, 2014 5:10PM
 *       Description:  Simple bubblesort sorting algorithm in which 
 *                     is perhaps the simplist "exchange sort"
 *                     Best Case : O(n)
 *                     Worst Case: O(n^2)
 *                     Average Case : O(n^2)
 */
#ifndef _BUBBLESORT_H_
#define _BUBBLESORT_H_
#include <iostream>

template <class T> void bubblesort(T array[] , int size){
   if(size == 0){
    std::cout << "Error: List is empty" << std::endl;
  }

  int notSwapped = 0;  //Counter to see if something was swapped. No swaps means the array is sorted.
  while(notSwapped != size-1){   // While loop breaks when there were no swaps on every pass of a for loop
    notSwapped = 0; //Resets counter before every for loop
    for(int i = 0 ; i < size-1; i++){
      if(array[i] > array[i+1]){  // If two elements are out of place, they are swapped
	T temp = array[i];
	array[i] = array[i+1];
	array[i+1] = temp;
      }
      else{
	notSwapped++;              // Else, nothing was swapped; elements are sorted.
      }
    }
  }
}

#endif //_BUBBLESORT_H_
