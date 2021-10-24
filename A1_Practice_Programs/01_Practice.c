
#include <stdio.h>
#include <unistd.h>

int main(){
    int a=5;
    int *ptr;
    ptr =  &a;
    // long signed int *ptrptr = &ptr;
    // long signed int *ptrptrptr = &ptrptr;
    //printf("%ls\n",ptr);
    // printf("%lu\n",(long unsigned int) ptr);
    printf("%p  --- %ld\n", ptr,sizeof(ptr));
    printf("%x",202);


    printf("\n"); getpass("... press 'ENTER' to exit ...");
    return 0;
}
