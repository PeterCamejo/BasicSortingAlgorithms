/*
 *
 *     Project: Quicksort Sorting Algorithm
 *     Author: The Alex Camejo
 *     Last Edited: 1/17/14 11:28 AM
 *     Description:  Naive Quicksort algorithm that sorts
 *                   a given array between two given indexes,
 *                   usually the first and the last.
 *
 *
 */
#ifndef _QUICKSORT_H_
#define _QUICKSORT_H_
#include <iostream>


/*
 *     @param array[] : Given array to be sorted
 *     @param start: Starting index
 *     @param end: Ending index
 *     @param pivot: The pivot index,meant to be the element halfway into array
 *     @param temp: temporary variable used for swapping two elements
 */

template <class T>
void quicksort(T array[] , int start, int end){
  if(end == 0){  //If the start and end are the same, there is no need to sort
    return;
  }

  
  int i = start;
  int j = end;
  T temp;
  T pivot = (end + start) / 2;

    // Partioning
  while(i <= j){

    while(array[i] < array[pivot]){ // i iterates until array[i] is a value
      i++;                          // less greater than the pivot value
    }
    while(array[j] > array[pivot]){//j iterates until array[j] is a value
      j--;                         //greater than the pivot value
    }
    
    if( i <= j){             
      temp = array[i];    //The two elements are then switched, making the
      array[i] = array[j];//greater-than-pivot value found in i's iteration
      array[j] = temp;    //now in the section of the array where values
      i++;                //greater than the pivot's should be, and vice versa
      j--;                //for j's value
    }
  }

  // Sorting partions
  if(start < j){
    quicksort(array , start , j); //Function is recursively called on the first
  }                               //half of the array
  if(end > i){
    quicksort(array , i , end);  //Function is recursively called on the last
  }                              //half of the array.
  return;
}

/*
 *     @param array[]: array to be sorted
 *     @param size: array's size
 */
  
template <class T>
void quicksort(T array[] , int size){ 
  quicksort(array , 0  , size-1);
  return;
}

#endif //_QUICKSORT_H_
