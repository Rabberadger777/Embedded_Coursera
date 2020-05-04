/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Given an array, print the contents of the array
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/**
 * @brief Given an array, print the contents of the array
 * 
 * @param arr The array to be printed.
 */ 
void print_array(unsigned char arr[], unsigned int len);

/**
 * @brief Print the statistics associated with the array
 * 
 * @param arr The target array 
 * @param len the length of the target array
*/
void print_statistics(unsigned char arr[], unsigned int len);

/**
 * @brief Find the median of the array
 * 
 * @param arr The target array
 * @param len The length of the target array
 * 
 * @return The median value of the target array.
 */
unsigned char find_median(unsigned char arr[], unsigned int len);

/**
 * @brief Find the mean of the array
 * 
 * @param arr the target array
 * @param len The length of the target array
 * 
 * @return The mean value of the target array
 */
unsigned char find_mean(unsigned char arr[], unsigned int len);

/**
 * @brief Find the maximum of the array
 * 
 * @param arr The target array
 * @param len The length of the target array
 * 
 * @return The maximum of the target array
 * 
 */
unsigned char find_maximmum(unsigned char arr[], unsigned int len);

/**
 * @brief Find the minimum of the array
 * 
 * @param arr The target array
 * @param len The length of the target array
 * 
 * @return The maximum of the target array
 */
unsigned char find_minimum(unsigned char arr[], unsigned int len);

/**
 * @brief Sort the target array from largest to smallest
 * 
 * @param arr The target array
 * @param len The length of the target array
 * 
 * @return The minimum of the target array
 *  
 */
unsigned char sort_array(unsigned char arr[], unsigned int len);




#endif /* __STATS_H__ */
