#include<stdio.h>

int main() {
    int i = 0;

    while(i < 5) { //prints teyupi ftw 5 times but increments i inside the loop
        printf("teyupi ftw\n");
        i++;
    }

    i = 0;
    printf("\n\n\n");

    do {
        printf("teyupi ftw\n");
        i++;
    } while (i < 5);
}

/*
WHILE checks first if i < 5
DO-WHILE does the statement/s first before checking if i < 5

It may or may not be the same output in different situations...
*/
