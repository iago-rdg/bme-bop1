// 3. Least
// Write a program that creates an array of ten elements!
// Assign initial values to the array elements, too!
// (So you do not need to read them one by one.) 
// Print the array to the screen!

// Array: 25 69 54 8 77 6 29 10 3 98
// Modify your program to print the corresponding index values, too!

// The array: [0]=25 [1]=69 [2]=54 [3]=8 [4]=77 [5]=6 [6]=29 [7]=10 [8]=3 [9]=98
// Extend your program to find and print the least element of the array. 
// (Test it for three cases: when the least number is the first element of the array;
// when it is the last; when it is somewhere in between them!) Print the array in such manner 
// that a special mark is printed at the least element.

// The least: 3
// Marked: 25 69 54 8 77 6 29 10 3[MIN] 98

#include <stdio.h>

int main() {

    int arr[10] = {25, 69, 54, 8, 77, 6, 29, 10, 3, 98};
    int least = arr[0];
    int pos = 0;
    
    printf("The array: ");

    for (int i = 0; i < 10; i++) {
        printf("[%i]=%i ", i,arr[i]);
    }

    for (int j = 0; j < 10; j++) {
        if (arr[j]<least)
        {
            least = arr[j];
            pos = j;
        }
    }

    printf("\nThe least: %i", least);
    printf("\nMarked: ");

    for (int k=0;k<10;k++){
        printf("%i",arr[k]);
        if(k==pos)
            printf("[MIN] ");
        else
            printf(" ");
    }

    return 0;
}