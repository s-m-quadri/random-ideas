

//   #########################################################################
// @@ + =================================================================== + @@
// @@ | ------------------------------------------------------------------- | @@
// @@ |         IN THE NAME OF ALLAH , THE MOST AND FOREVER MERCIFUL        | @@
// @@ |        -------------------------------------------------------      | @@
// @@ |                    STUDENTS DATABASE V1.0                           | @@
// @@ |                       USING STRUCTURES                              | @@
// @@ |        ------------------------------------------------------       | @@
// @@ |  NO COPYRIGHT CLAIM                                                 | @@
// @@ |  YOU CAN READ, MODIFY, EDIT AND CAN SHARE FREELY                    | @@
// @@ |  BE CAUTION, THERE MAY BE MISTAKES                                  | @@
// @@ |              REPORT IF FOUND ON:                                    | @@
// @@ |       PHONE: 9881978944                                             | @@
// @@ |      E-MAIL: quadrisyedminnatullah@gmail.com                        | @@
// @@ | ------------------------------------------------------------------- | @@
// @@ + =================================================================== + @@
//   #########################################################################
//                          CREATED   :   03-Apr-2021
//                          MODIFIED  :   27-May-2021

#include <stdio.h>
#include <string.h>

//COLOR CODES AND FORMAT FUNCTIONS
void clr_red() { printf("\033[31;1m"); }
void clr_green() { printf("\033[32;1m"); }
void clr_yellow() { printf("\033[33;1m"); }
void clr_blue() { printf("\033[34;1m"); }
void clr_purple() { printf("\033[35;1m"); }
void clr_cyan() { printf("\033[36;1m"); }
void deflt() { printf("\033[0m"); }
void bold() { printf("\033[5;1m"); }
void underline() { printf("\033[4;1m"); }

int main()
{
    struct header_Database
    {
        unsigned short int roll_no;
        char name[25];
        char phone_no[14];
        char status[20];
    } h1;

    clr_yellow();
    printf("\n -----------------------------------------------------------  ");
    printf("\n         STUDENTS DATA BASE CREATER - VERSION 1");
    printf("\n ----------------------------------------------------------- \n");
    deflt();
    int class, student;
    clr_red();
    printf("\n   Please Enter The Number of Classes..    :  ");
    deflt();
    scanf("%d", &class);
    clr_red();
    printf("                   Students per class..    :  ");
    deflt();
    scanf("%d", &student);
    struct header_Database SDB[class][student];

    //GET INPUT FROM USER
    for (unsigned short int j = 0; j < class; j++)
    {
        for (unsigned short int i = 0; i < student; i++)
        {
            underline();
            printf("\nCLASS:%hu , STUDENT:%hu \n", j + 1, i + 1); // Field Filling Guide
            deflt();
            clr_green();
            printf("                       Roll No.  : "); // Field Filling Guide
            deflt();
            scanf("%hu", &SDB[j][i].roll_no); // Taking Integer input
            clr_green();
            printf("                       Name.     : "); // Field Filling Guide
            deflt();
            scanf(" %[^\n]%*c", SDB[j][i].name); // Taking Input With Spaces
            SDB[j][i].name[29] = '\0';           // Eliminating Overflowing Charachters
            clr_green();
            printf("                       Phone No. : "); // Field Filling Guide
            deflt();
            scanf(" %[^\n]%*c", SDB[j][i].phone_no); // Taking Input With Spaces
            SDB[j][i].phone_no[16] = '\0';           // Eliminating Overflowing Charachters
            clr_green();
            printf("                       Status    : "); // Field Filling Guide
            deflt();
            scanf(" %[^\n]%*c", SDB[j][i].status); // Taking Input With Spaces
            SDB[j][i].status[29] = '\0';           // Eliminating Overflowing Charachters
        }
    }

    //PRINTNG TO USER FOR CONFORMATION
    printf("\n     ----------------------------------------  ");
    clr_green();
    printf("\n CLS.STD:ROLL\t (PHONE) NAME - [STATUS]");
    deflt();
    for (unsigned short int j = 0; j < class; j++)
    {
        for (unsigned short int i = 0; i < student; i++)
        {
            printf("\n %hu.%hu:%hu\t (%s) %s - [%s]", j + 1, i + 1, SDB[j][i].roll_no, SDB[j][i].phone_no, SDB[j][i].name, SDB[j][i].status);
        }
    }
    printf("\n     ----------------------------------------  \n");

    //COMPLETING CODE
    return 0;
}