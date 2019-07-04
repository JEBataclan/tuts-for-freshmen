#include<stdio.h>

int main() {
    int     num1 = 69;
    float   num2 = 69.69;
    double  num3 = 96.96;
    char    char1 = 'j';
    char    string1[20] = "jan pogi";

    printf("%d\n", num1); //"\n" stands for newline
    printf("%.2f\n", num2); //.2 for 2 decimal places only, you may remove it.
    printf("%.2lf\n", num3); //.2 for 2 decimal places only, you may remove it.
    printf("%c\n", char1);
    printf("%s\n", string1); //you can also try replacing s with c but it will only print the first element which is 'j'.
}

/*
declaration of variables and initializing values:
DataType Variable_Name = Value;
----
%d, %f, %lf, %c, and &s are format specifiers that depends on the data types.
these are also the format specifiers that you'll use for inputs.
----
you may also check other data types such as:
-unsigned char
-signed char
-unsigned int
-short
-unsigned short
-long
-unsigned long
-long double
*/
