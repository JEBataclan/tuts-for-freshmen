#include<stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 == num2) { //translation: if num1 is equal to num2
        printf("First number and second number is equal.\n");
    }

    if (num1 != num2) { //translation: if num1 is not equal to num2
        printf("First number and second number is not equal.\n");
    }

    if (num1 > num2) { //translation: if num1 is greater than num2
        printf("First number is greater than the second number.\n");
    }

    if (num1 < num2) { //translation: if num1 is less than num2
        printf("First number is less than the second number.\n");
    }

    if (num1 >= num2) { //translation: if num1 is greater than or equal to num2
        printf("First number is greater than or equal to the second number.\n");
    }

    if (num1 <= num2) { //translation: if num1 is less than or equal to num2
        printf("First number is less than or equal to the second number.\n");
    }
}

/*
what happens here is that it goes through all the conditions after the user-input
then prints whatever applies to it...

sample ouput:
Enter first number: 69
Enter second number: 96
First number and second number is not equal.
First number is less than the second number.
First number is less than or equal to the second number.

note:   be cautious with using == and =.
        = is used for storing a value to a variable
        == is used to compare variables/values in conditional statements
*/
