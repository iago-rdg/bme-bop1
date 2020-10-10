// Write a program that contains an array of 10 elements initialized by values of your choice.

// Shift all elements in the array towards the beginning of the array by one cell.
// The first element should go into the last cell (you may call this process rotation ). 
// Repeat the shifting (rotation) process 10 times, printing the array after each step. 
// Your output should be similar to the one shown on the right side.

// Keep in mind, that the task is not to obtain the output by using tricky indexing!
// The elements of the array must actually move around!

// LOOP
//     print the array        only printf here, no change in the array
//     rotate the array to the left by 1 the array changes, no printf here
// END OF LOOP

// Hint
// There is no need for a second array! The second element can overwrite the first, the third can overwite the second… 
// The only qestion is what shall we put into the last cell. Make a drawing and find out the necessary steps.

#include <stdio.h>

int main() {
    int arr[10] = {25, 69, 54, 8, 77, 6, 29, 10, 3, 98} , temp , i=0 , j=0;
    
    for (j = 0; j < 10; j = j + 1) {
        for (i = 0; i < 10; i = i + 1)
            printf("%d ", arr[i]);
        printf("\n");

        temp = arr[0];

        for (i = 0; i < 9; i = i + 1)
            arr[i] = arr[i+1];
        arr[9] = temp;
    }

    return 0;
}