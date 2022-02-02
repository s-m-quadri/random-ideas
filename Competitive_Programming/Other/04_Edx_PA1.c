#include <stdio.h>

int main(void){
    int a=65;
    printf("A (Address) %p\n",&a);
    printf("A (Value) %i\n",a);

    int *b=&a;
    printf("B (Address) %p\n",&b);
    printf("B (Value) %p\n",b);
    printf("B (Pointing) %i\n",*b);
    
    int *c=&b;
    printf("C (Address) %p\n",&c);
    printf("C (Value) %p\n",c);
    printf("C (Pointing) %i\n",*c);
    return 0;
}