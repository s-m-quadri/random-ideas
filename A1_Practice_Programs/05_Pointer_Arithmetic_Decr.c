// By: 5MQuadr!
// Last updated: 17 Aug 2021

#include <stdio.h>
#define MAX 3

int main(void)
{
    //Definitions and assignments
    int arr[] = {15, 16, 17}, *ptr = &arr[MAX - 1];

    //Loops to know whats going on...
    for (int i = MAX; i != 0; i--) // i = 3,2,1
    {
        printf("arr[%d] = %d (At memory %p)\n", i - 1, *ptr, ptr);
        ptr--; //moving to previous block of memory of size (int)
    }

    //For successfully completion
    return 0;
}