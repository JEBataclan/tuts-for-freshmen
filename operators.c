#include<stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;

    int sum =  num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    int quot = num2 / num1; //you may use float for decimal
                            //but num1 and num2 must be float also
    printf("%d\n", sum);
    printf("%d\n", diff);
    printf("%d\n", prod);
    printf("%d", quot);
}

/*
possible to produce the same output w/o using variables sum, diff, prod, quot
by changing the variables in printf to operations instead:

printf("%d\n", num1 + num2);
printf("%d\n", num1 - num2);
printf("%d\n", num1 * num2);
printf("%d\n", num1 / num2);
*/
