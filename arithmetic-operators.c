#include<stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;

    int sum =  num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    int quot = num2 / num1; //you may use float for decimal
                            //but num1 and num2 must be float also.
    int rem = 5 % 3;        //modulo operator, gets the remainder.
    
    
    printf("%d\n", sum);
    printf("%d\n", diff);
    printf("%d\n", prod);
    printf("%d\n", quot);
    printf("%d", rem);
}

/*
possible to produce the same output w/o using variables sum, diff, prod, quot, and rem
by changing the variables in printf to operations instead:

printf("%d\n", num1 + num2);
printf("%d\n", num1 - num2);
printf("%d\n", num1 * num2);
printf("%d\n", num1 / num2);
printf("%d", 5 % 3);
*/
