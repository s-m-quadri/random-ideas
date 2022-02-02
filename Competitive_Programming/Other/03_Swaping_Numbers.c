
// PROGRAM TO SWAP ANY TWO NUMBER TAKEN FROM USER
//           [WITHOUT USING POINTER]

#include <stdio.h>

int a,b;    //GLOBAL VARIABLE

void swap_ab(){
    int temporary_variable=a;  // temp <-- a
    a=b;  // a <-- b
    b=temporary_variable;  // b <-- b
}

void main(){
    // TAKING INPUT FROM USER
    printf("\nPlease Enter Any Two Numbers :\n");
    scanf("%d %d",&a,&b);
    //PERFORMING SWAP
    printf("Before Swap They Are:\t %d , %d\n",a,b);
    swap_ab();
    printf("After Swap They Are:\t %d , %d\n",a,b);
}

