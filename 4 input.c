#include<stdio.h>

int main() {
    int num;    //notice that i didnt initialize a value 'cause i'll store a value later
                //by user-input

    printf("Enter a number: ");
    scanf("%d", &num);  //dont forget the ampersand. the purpose of & is to let the compiler
                        //know that we need to store the value to num's MEMORY ADDRESS
                        //refer to "data-types.c" for format specifiers.
    printf("Your input is: %d", num);
}

/*
note:
you can input numbers on char or char[](string) data types
but you can't input characters on int, float, double, etc. data types.
*/
