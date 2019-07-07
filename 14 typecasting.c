#include<stdio.h>

int main() {
    int num = 69;
    int mun = (float)num;

    printf("%d\n", num); //output: 69
    printf("%f\n", num); //output: gibberish
    printf("%f\n", (float)num); //output: 69.00000
    printf("%f\n", mun); //output: 69.00000

    printf("%d", num);//output: 69
}

/*
line 9 temporarily converts num variable
to a float for the printing process.
while on line 5, we initialized mun's value
to a float-typecasted value of num that
we used on line 10

line 12, just to show you num is still an int :V :V :V
*/
