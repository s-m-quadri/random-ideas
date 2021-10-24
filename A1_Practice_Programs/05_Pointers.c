// By: 5MQuadr!
// Last updated: 18 Aug 2021

#include <stdio.h>

int main(void)
{
    int value = 100, *ptr01, **ptr02, ***ptr03;
    ptr01 = &value;
    ptr02 = &ptr01;
    ptr03 = &ptr02;

    printf(" \n TREE REPRESENTATION \n\n");
    printf("         %p = (&ptr03) ...\n", &ptr03);
    printf(" ptr03 = %p = (&ptr02) ...\n", ptr03);
    printf(" ptr02 = %p = (&ptr01) ( *ptr03) ...\n", ptr02);
    printf(" ptr01 = %p = (&value) ( *ptr02) ( **ptr03) ...\n", ptr01);
    printf(" value = %14d = (*ptr01) (**ptr02) (***ptr03) ...\n", value);
    printf(" \n DETAILED \n\n");
    printf(" &value = %p , value = %d , *value = dont exist\n", &value, value);
    printf(" &ptr01 = %p , ptr01 = %p , *ptr01 = %d\n", &ptr01, ptr01, *ptr01);
    printf(" &ptr02 = %p , ptr02 = %p , *ptr02 = %p , **ptr02 = %d\n", &ptr02, ptr02, *ptr02, **ptr02);
    printf(" &ptr03 = %p , ptr03 = %p , *ptr03 = %p , **ptr03 = %p , ***ptr03 = %d\n", &ptr03, ptr03, *ptr03, **ptr03, ***ptr03);

    return 0;
}