#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Prints an array of integers
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size){
    int i, j, temp, k;
    
    k = size;
    for (i = 0; i < k; i++){
        for (j = 0; j < k - 1; j++)
        {
               if (array[j] > array[j+1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j+1] = temp;
                }
                if (j == k - 2){
                    printf("%d", array[j]);
                }
                else{
                    printf("%d", array[j]);
                    printf(", ");
                }
        }
        printf("\n");
    }
}
