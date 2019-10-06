#include<stdio.h>
#include<string.h>

int main() {
    char input[100];
    char keys[26][5] = {"2", "22", "222", "3", "33", "333", "4", "44", "444",
                        "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777",
                        "8", "88", "888", "9", "99", "999", "9999"};

    printf("Input a string: ");
    scanf("%s", input);

    for(int i = 0; i < strlen(input); i++) {
        printf("%s", keys[input[i] - 'a']);
    }
}
