#include<stdio.h>
#include<string.h>

int main() {
    char var[255];

    printf("Input a string: ");
    scanf("%s", var);

    int i = 0, j = strlen(var) - 1, flag = 1;

    while(i != j) {
        if (var[i] != var[j]) {
            flag = 0;
            break;
        }
        i++; j--;
    }

    flag == 1 ? printf("Palindrome.") : printf("Not palindrome.");
}
