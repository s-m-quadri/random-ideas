
// BY 5MQuadr!
// Last Updated On: 13 Oct 2021

#include <stdio.h>
long int factorial(int);

void main()
{
    printf("\nFACTORIAL CALCULATOR V1.0\n");
    printf("\nPlease Enter the number (0-20) : ");
    int input;
    scanf("%d", &input);
    long int output = factorial(input);
    if (output != 0) // Error Checking
        printf("\nFactorial of %d is : %d! = %ld\n\n", input, input, output);
}

long int factorial(int result)
{
    if (result >= 1 && result <= 20)
        return result * factorial(result - 1);
    else if (result == 0)
        return 1;
    else // For any other possible error
    {
        printf("\nSomething went wrong ... !!!\n\n");
        return 0;
    }
}