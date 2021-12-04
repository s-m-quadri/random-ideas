// By: 5MQuadr!
// Last updated: 17 Aug 2021

#include <stdio.h>
#define MAX 3

int main(void)
{
    //Definitions and assignments
    int arr[] = {15, 16, 17}, *ptr = arr;

    //Loops to know whats going on...
    for (int i = 0; i < MAX; i++) // i = 0,1,2
    {
        printf("arr[%d] = %d (At memory %p)\n", i, *ptr, ptr);
        ptr++; //moving to next block of memory of size (int)
    }

    //For successfully completion
    return 0;
}