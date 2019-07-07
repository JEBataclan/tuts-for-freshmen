#include<stdio.h>

int main() {
    int choice = 1; //you may change this

    switch (choice) {
    case 1:
        printf("This is case 1.");
        break;
    case 2:
        printf("This is case 2.");
        break;
    case 3:
        printf("This is case 3.");
        break;
    default: // you may add more cases by following the format above
        printf("Out of range.");
        break;
    }
}
