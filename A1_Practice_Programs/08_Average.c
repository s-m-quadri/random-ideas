// By: 5MQuadr!
// Last updated: 18 Aug 2021
#include <stdio.h>

//Prototype
double getAverage(int *arr);

int main(void)
{   
    //Finding Averange and then Displaying
    int Amount[] = {28, 29, 30, 31, 32, '\0'};
    printf("Average value is: %f\n", getAverage(Amount));
    return 0;
}

double getAverage(int *arr)
{
    // Calculating sum and then dividing it by size
    int sum, i;
    for (i = 0, sum = 0; *(arr + i) != '\0'; i++)
        sum += arr[i];
    return (double)sum / i;
}