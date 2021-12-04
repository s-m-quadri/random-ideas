// By: 5MQuadr!
// Last updated: 18 Aug 2021

#include <stdio.h>
#define MAX 3

int main(void)
{
    //String is an array of character

    //Using single string
    char *var = "Hi there, how are you !!";
    printf("%%s = %s @ start %p=var , end at null charachter\n", var, var);
    printf("%%c = var[0] = *(var+0) = %c  \n", var[0]);

    //Using array of string
    char *arr[3] = {"Element_01", "Element_02", "Element_03"};
    printf("%%s = %s @ start %p=arr[0] , end at null charachter\n", *(arr + 0), *(arr + 0));
    printf("%%c = arr[0][9] = *(*(arr+0)+9) = %c\n", *(*(arr + 0) + 9));
    return 0;
}