// By: 5MQuadr!
// Last updated: 18 Aug 2021

#include <stdio.h>
#define MAX 3

int main()
{
    int var[] = {15, 16, 17};
    for (int i = 0; i < MAX; i++)
    {
        printf("var[%d] = *(var + %d) = %d\n",i, i, *(var + i));
    }
    return 0;
}