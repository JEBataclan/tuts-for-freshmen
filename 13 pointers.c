#include<stdio.h>

int main() {
    int num = 69;   //declaration and initialization of a variable
    int *pInt = &a; //pointers are declared by putting asterisk(*) before the name
                    //the ampersand(&) indicates we are storing the MEMORY ADDRESS of num to pointer pInt.

    printf("%d\n", num);  //expected output: 69
    printf("%d", *p)    //same output. this one is called dereferencing
                        //we extract the value stored in the memory address that pInt is holding
                        //which is num's value, 69.

    printf("\n\n");

    char *pChar = "TeyUPi"; //you'll notice the convenience of pointers if you'll use it on an array variable

    printf("%s", name); //no need to use asterisk on "char pointers"
}

/*
you might as why we didn't dereference the name variable...

it's because array is somehow similar to pointers.
when you're working with arrays, you're actually working with multiple memory addresses,
same goes with pointers so we didnt need to dereference "name" 'cause it's already an address.


*/
