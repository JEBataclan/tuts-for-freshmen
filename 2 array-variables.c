#include<stdio.h>

int main() {
    int numbers[5] = {3, 5, 7, 6, 9};

    printf("%d\n", numbers[0]); //prints element on index 0 which is 3
    printf("%d\n", numbers[1]); //prints element on index 1 which is 5
    printf("%d\n", numbers[2]); //prints element on index 2 which is 7
    printf("%d\n", numbers[3]); //prints element on index 3 which is 6
    printf("%d", numbers[4]); //prints element on index 4 which is 9
                                //array index always starts at 0;
}
/*
you may also print the elements of an array using for-loop:
for(int i = 0; i < 5; i++) { //(start, decision, increment/decrement)
    printf("%d\n", numbers[i]);
}
*/
