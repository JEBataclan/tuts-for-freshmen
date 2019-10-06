#include<stdio.h>

int main() {
    int input, dup, length = 0, div = 1, rem, pow = 1, sum = 0;

    scanf("%d", &input);
    dup = input;

    while (div < input) {
        length++;
        div *= 10;
    }

    div = 10;

    while (input != 0) {
        rem = input % div;
        for(int i = 0; i < length; i++) {pow *= (rem/(div/10));}
        sum += pow;
        pow = 1;
        input -= rem;
        div *= 10;
    }

    dup == sum ? printf("Armstrong Number") : printf("Nah");
}
