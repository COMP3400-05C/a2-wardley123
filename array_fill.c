#include <stddef.h> // For NULL

/**
 * given numbers return the amount of times a number was put into the array
 */
int array_fill(int* array, int array_len, int begin, int end) {
    int i =0;
    int current = begin;
    int counter = 0;

    while(current <= end && i < array_len){
        array[i] = current;
        current++;
        counter++;
        i++;
    }
    return counter;

}
