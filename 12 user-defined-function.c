#include<stdio.h>

int GetSum(int num1, int num2) { //variable names in the parameter may be changed
    return num1 + num2; //returns the sum of num1+num2
}

int main() {
    int num1 = 3;
    int num2 = 5;

    int sum = GetSum(num1, num2); //pass the variables num1 and num2 to GetSum function.

    printf("%d", sum);
}

/*
you may also not declare variable sum and do this instead:
printf("%d", GetSum(num1, num2));

this will still have the same output
*/
