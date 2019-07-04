#include<stdio.h>

int main() {
    int nums[5];

    printf("Input 5 numbers:\n");

    //input a number to each element
    for(int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    //print all elements
    for(int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
}

/*
this may help you visualize what is happening in the first for-loop:
START = 0; LIMIT 5; INCREMENT AS LONG AS THE VALUE IS LESS THAN 5
scanf("%d", &nums[0]);
scanf("%d", &nums[1]);
scanf("%d", &nums[2]);
scanf("%d", &nums[3]);
scanf("%d", &nums[4]);

same goes with the second for loop...

note: if you are dealing with arrays, always start your for-loop to 0.
        because index of array variables always starts at 0.
*/
