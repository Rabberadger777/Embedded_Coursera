/*
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation file of stats.h
 *
 * First coursera lesson
 *
 * @author Dan Lannan 
 * @date 05/04/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  print_statistics(test, SIZE);
  
}

/* Add other Implementation File Code Here */
void print_array(unsigned char arr[], unsigned int len){
  int i;

  for(i = 0; i < len; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
};

void print_statistics(unsigned char arr[], unsigned int len){
  // Get minimum
  unsigned char minimum = find_minimum(arr, len);
  // Get maximum
  unsigned char maximum = find_maximum(arr, len);
  // Get mean
  unsigned char mean = find_mean(arr, len);
  // Get median
  unsigned char median = find_median(arr, len);

  // Print the statistics
  printf("The array statistics are:\n");
  printf("Minimum: %d\n", minimum);
  printf("Maximum is: %d\n", maximum);
  printf("Mean: %d\n", mean);
  printf("Median: %d\n", median);
};

unsigned char find_median(unsigned char arr[], unsigned int len){
  /* Declare local function variables*/
  unsigned char median;
  unsigned char mid;
  /* Write function */
  if (len%2 == 0){
    mid = len/2;
    median = ( arr[mid] + arr[mid+1] ) / 2;
  }
  else{
    mid = mid/2;
    median = ( arr[mid] );
  }
  return median;
};

unsigned char find_mean(unsigned char arr[], unsigned int len){
  /* Declare local function variables */
  unsigned int sum = 0;
  int i;

  for(i = 0; i<len; i++){
    sum = (unsigned int) (sum + arr[i]);
  }
  sum /= len;
  return sum;
};

unsigned char find_maximum(unsigned char arr[], unsigned int len){
  /* Declare local function variables*/
  unsigned char * sorted = sort_array(arr, len);
  unsigned char maximum = sorted[0];
  return maximum;
  
};

unsigned char find_minimum(unsigned char arr[], unsigned int len){
  /* Declare local function variables */
  unsigned char * sorted = sort_array(arr, len);
  unsigned char minimum = sorted[len-1];
  return minimum;
};

unsigned char * sort_array(unsigned char arr[], unsigned int len){
  /* Declare local function variables*/
  unsigned char temp;
  int i; int j; 
  for (i=0; i < len; i++){
    for(j = i+1; j < len; j++){
      if ( arr[i] < arr[j] ){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return arr;
};

