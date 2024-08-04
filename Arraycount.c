#include <stdio.h>

int main() {
    int Arr[] = {1, 2, 3, 4, 5, 6, 7};  // Define an array
    int iCnt = 0;  // Counter for the number of elements
    int size = sizeof(Arr) / sizeof(Arr[0]);  // Calculate the size of the array
    int i;  // Loop variable

    // Iterate over the array and count elements
    for(i = 0; i < size; i++) {
        iCnt++;
    }

    printf("The number of elements in the array is: %d\n", iCnt);

    return 0;
}
