// By: 5MQuadr!
// Last updated: 17 Aug 2021

#include <stdio.h>

int main(void)
{
    // Declaration and assignment
    int var = 10;
    int *ptr = &var; 

    //Displaying what is going on?
    printf("  var  = %d\n",var);
    printf("  &var  = %p\n",&var);
    printf("  ptr  = %p\n",ptr);
    printf("  *ptr  = %d\n",*ptr);
    printf("  &ptr  = %p\n",&ptr);

    //returning for successful completion
    return 0;
}