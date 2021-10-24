

// This is modified cs50 library

#include "cs50.c"

// By 5MQuadr!
// Last Updated On: 19 Oct 2021

void colorize(char color_number)
{
    switch (color_number)
    {
    case 'r': //red
        printf("\033[31;1m");
        break;
    case 'g': //green
        printf("\033[32;1m");
        break;
    case 'y': //yellow
        printf("\033[33;1m");
        break;

    case 'b': //blue
        printf("\033[34;1m");
        break;

    case 'p': //purple
        printf("\033[35;1m");
        break;

    case 'c': //cayan
        printf("\033[36;1m");
        break;

    default:
        printf("\033[0m");
    }
}

void decolorize()
{
    printf("\033[0m");
}

string get_string_format(char color_number, va_list *args, const char *format, ...)
{
    // Getting arguments from ellipsis
    va_list pointer;
    va_start(pointer, format);
    char arguments[50];
    vsprintf(arguments, format, pointer);
    va_end(pointer);

    // Formatting
    colorize(color_number);
    string output = get_string(args, arguments);
    decolorize();
    return output;
}

char get_char_format(char color_number, const char *format, ...)
{
    // Getting arguments from ellipsis
    va_list pointer;
    va_start(pointer, format);
    char arguments[50];
    vsprintf(arguments, format, pointer);
    va_end(pointer);

    // Formatting
    colorize(color_number);
    char temp = get_char(arguments);
    decolorize();
    return temp;
}

double get_double_format(char color_number, const char *format, ...)
{
    // Getting arguments from ellipsis
    va_list pointer;
    va_start(pointer, format);
    char arguments[50];
    vsprintf(arguments, format, pointer);
    va_end(pointer);

    // Formatting
    colorize(color_number);
    double temp = get_double(arguments);
    decolorize();
    return temp;
}

float get_float_format(char color_number, const char *format, ...)
{
    // Getting arguments from ellipsis
    va_list pointer;
    va_start(pointer, format);
    char arguments[50];
    vsprintf(arguments, format, pointer);
    va_end(pointer);

    // Formatting
    colorize(color_number);
    float temp = get_float(arguments);
    decolorize();
    return temp;
}

int get_int_format(char color_number, const char *format, ...)
{
    // Getting arguments from ellipsis
    va_list pointer;
    va_start(pointer, format);
    char arguments[50];
    vsprintf(arguments, format, pointer);
    va_end(pointer);

    // Formatting
    colorize(color_number);
    int output = get_int(arguments);
    decolorize();
    return output;
}

long get_long_format(char color_number, const char *format, ...)
{
    // Getting arguments from ellipsis
    va_list pointer;
    va_start(pointer, format);
    char arguments[50];
    vsprintf(arguments, format, pointer);
    va_end(pointer);

    // Formatting
    colorize(color_number);
    long temp = get_long(arguments);
    decolorize();
    return temp;
}

long long get_long_long_format(char color_number, const char *format, ...)
{
    // Getting arguments from ellipsis
    va_list pointer;
    va_start(pointer, format);
    char arguments[50];
    vsprintf(arguments, format, pointer);
    va_end(pointer);

    // Formatting
    colorize(color_number);
    long long temp = get_long_long(arguments);
    decolorize();
    return temp;
}

void display_format(char color_number, const char *format, ...)
{
    // Getting arguments from ellipsis
    va_list pointer;
    va_start(pointer, format);
    char arguments[50];
    vsprintf(arguments, format, pointer);
    va_end(pointer);

    // Formatting
    colorize(color_number);
    printf(arguments);
    decolorize();
}