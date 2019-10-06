#include<stdio.h>

int main() {
    char input[255];
    int flag = 1, count = 0;

    printf("Input a string: ");
    scanf("%s", input);

    for(int i = 0; input[i] != '\0'; i++) {
        for(int j = 0; input[j] != '\0'; j++) {
            if (input[i] == input[j]) {
                count++;
            }
        }
        if (count != 2) {
            flag = 0;
            break;
        } else {
            count = 0;
        }
    }

    flag == 1 ? printf("Pair Isogram.") : printf("Not Pair Isogram.");
}
