#include<stdio.h>

int main() {
    char name[10] = "teyupi"; //try changing this with 10+ characters

    printf("%s", name);
}

/*
if the stored value is greater than the size of the array, 10 in the given example,
it will still print the value but it may cause errors on different compilers/IDEs
or bug/s in printing.
*/
