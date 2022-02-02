// By: 5MQuadr!
// Last updated: 18 Aug 2021

#include <stdio.h>

//Prototype
void swap(int *, int *);

int main(void)
{
    //Getting Input from user
    int x, y;
    printf("\nEnter two values\n");
    scanf("%d %d", &x, &y);

    //Swaping and displying
    swap(&x, &y);
    printf("%d %d , Swaped\n", x, y);
}

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}