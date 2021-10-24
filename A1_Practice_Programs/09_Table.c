// By: 5MQuadr!
// Last updated: 18 Aug 2021
#include <stdio.h>

//Prototype
int *get_table_array(int);
void display_array(int *);

int main(void)
{
    //Taking Input from user
    int input;
    printf("Enter The Number : ");
    scanf("%d", &input);
    //Getting Table
    display_array(get_table_array(input));
    return 0;
}

int *get_table_array(int num)
{
    //To make out of scope availability
    static int array[10];
    for (int i = 0; i < 10; i++)
        array[i] = (i + 1) * num;
    //Returning Original Address
    return array;
}

void display_array(int *Table_Array)
{
    //Displays an array
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", Table_Array[0], i + 1, Table_Array[i]);
    }
}