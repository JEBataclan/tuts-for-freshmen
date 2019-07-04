/*
    Gets the highest and lowest value
    among all of your entered values
    without the use of array.
*/

#include<stdio.h>

int main() {
    int input, highest = 0, lowest = 0;

    while (input != 0) {
        printf("Input any numbers(0 to stop): ");
        scanf("%d", &input);

        if (lowest == 0) {
            lowest = input;
        }

        if (input > highest) {
            highest = input;
        }

        if (input < lowest && input != 0) {
            lowest = input;
        }
    }

    printf("Highest: %d\nLowest: %d", highest, lowest);
}
