#include<stdio.h>

int main() {
    int arr[255], count = 0, flag = 1;

    printf("Input numbers (0 to stop):\n");
    for(int i = 0; i < 255; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0) break;

        count++;
    }

    for(int i = 0; i < count - 1; i++) {
        if (arr[i] * 2 > arr[i+1]) {
            flag = 0;
            break;
        }
    }

    flag == 1 ? printf("Good denomination.") : printf("Bad denomination.");
}
