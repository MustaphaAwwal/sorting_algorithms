#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Prints an array of integers
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size){
    int i, j, temp;
    for (i = 0; i < size; i++){
        for (j = 0; j < size - 1; j++)
        {
               if (array[j] > array[j+1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j+1] = temp;
                }
                if (j == size - 2){
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
