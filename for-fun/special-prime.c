#include<stdio.h>

int IsPrime(int n) {
    for(int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num, ctr, count = 0;

    printf("Input a number: ");
    scanf("%d", &num);
    fflush(stdin);

    if (IsPrime(num)) {
        printf("%d is a prime number.", num);
    } else {
        for(int i = num; i > i/2; i--) {
            if (IsPrime(i)) {
                printf("Missed %d counts.", count);
                break;
            } else {
                count++;
            }
        }
    }
}
