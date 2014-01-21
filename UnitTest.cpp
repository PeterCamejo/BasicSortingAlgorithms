/*
 *    Unit testing done using : 
 *    CATCH Unit Testing Framework by philsquared
 *
 *    Last Edited : January 21, 2014 5:08 PM
 *
 *
 *    For each test case, a random, 10 element int array will be used
 *    Along with a 5 element character array and a one element int array
 */
#define CATCH_CONFIG_MAIN
#include "include/catch.hpp" //Requires include from Catch
#include "string"
#include "insertionsort.h"
#include "quicksort.h"
#include "bubblesort.h"
#include "selectionsort.h"



TEST_CASE("Linear Insertion Sort is tested" , "[linearinsertsort(T array, int size)]"){
  int i[10] = {8,3,7,4,1,6,5,2,10,9};
  char j[5] = {'b' , 'c' , 'a' , 'e', 'd'};
  int k[1] = {2};
  
  linearinsertsort(i , 10);
  linearinsertsort(j , 5);
  linearinsertsort(k , 1);
  
  REQUIRE(i[0]  == 1 );
  REQUIRE(i[1] == 2);
  REQUIRE(i[2] == 3);
  REQUIRE(i[3] == 4);
  REQUIRE(i[4] == 5);
  REQUIRE(i[5] == 6);
  REQUIRE(i[6] == 7);
  REQUIRE(i[7] == 8);
  REQUIRE(i[8] == 9);
  REQUIRE(i[9] == 10);
  REQUIRE(j[0] == 'a');
  REQUIRE(j[1] == 'b');
  REQUIRE(j[2] == 'c');
  REQUIRE(j[3] == 'd');
  REQUIRE(j[4] == 'e');
  REQUIRE(k[0]  == 2);
}

TEST_CASE("Bubble Sort is tested" , "[bubblesort(T array , int size)]"){
  int i[10] = {2,7,5,3,8,9,1,10,4,6};
  char j[5] = {'b' , 'd' , 'e' ,'a' ,'c'};
  int k[1] = {2};
  
  bubblesort(i , 10);
  bubblesort(j , 5);
  bubblesort(k , 1);
  
  REQUIRE(i[0]  == 1 );
  REQUIRE(i[1] == 2);
  REQUIRE(i[2] == 3);
  REQUIRE(i[3] == 4);
  REQUIRE(i[4] == 5);
  REQUIRE(i[5] == 6);
  REQUIRE(i[6] == 7);
  REQUIRE(i[7] == 8);
  REQUIRE(i[8] == 9);
  REQUIRE(i[9] == 10);
  REQUIRE(j[0] == 'a');
  REQUIRE(j[1] == 'b');
  REQUIRE(j[2] == 'c');
  REQUIRE(j[3] == 'd');
  REQUIRE(j[4] == 'e');
  REQUIRE(k[0]  == 2);
  

}



TEST_CASE("Straight Selection Sort is tested" , "[straightselectsort(T array , int size)]"){
  int i[10] = { 6,3,1,4,10, 9, 2,7,8,5};
  char j[5] = {'e' , 'd', 'a', 'c', 'b'};
  int k[1] = {2};
  
  straightselectionsort(i,10);
  straightselectionsort(j,5);
  straightselectionsort(k , 1);

  REQUIRE(i[0]  == 1 );
  REQUIRE(i[1] == 2);
  REQUIRE(i[2] == 3);
  REQUIRE(i[3] == 4);
  REQUIRE(i[4] == 5);
  REQUIRE(i[5] == 6);
  REQUIRE(i[6] == 7);
  REQUIRE(i[7] == 8);
  REQUIRE(i[8] == 9);
  REQUIRE(i[9] == 10);
  REQUIRE(j[0] == 'a');
  REQUIRE(j[1] == 'b');
  REQUIRE(j[2] == 'c');
  REQUIRE(j[3] == 'd');
  REQUIRE(j[4] == 'e');
  REQUIRE(k[0]  == 2);
}

TEST_CASE("Quicksort is tested" , "[quicksort(T array , int size)]"){
  int i[10] = {1,3,4,2,5,8,7,9,10,6};
  char j[5] = {'b' ,'c' , 'a' ,'e' ,'d'};
  int k[1] = {2};
  
  quicksort(i , 10);
  quicksort(j , 5);
  quicksort(k , 1);
  
  REQUIRE(i[0]  == 1 );
  REQUIRE(i[1] == 2);
  REQUIRE(i[2] == 3);
  REQUIRE(i[3] == 4);
  REQUIRE(i[4] == 5);
  REQUIRE(i[5] == 6);
  REQUIRE(i[6] == 7);
  REQUIRE(i[7] == 8);
  REQUIRE(i[8] == 9);
  REQUIRE(i[9] == 10);
  REQUIRE(j[0] == 'a');
  REQUIRE(j[1] == 'b');
  REQUIRE(j[2] == 'c');
  REQUIRE(j[3] == 'd');
  REQUIRE(j[4] == 'e');
  REQUIRE(k[0]  == 2);

}

