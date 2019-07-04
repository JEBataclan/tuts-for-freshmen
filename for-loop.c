#include<stdio.h>

int main() {
    int i;

    for(i = 0; i < 5; i++) { //you may change the initalization(i = 0) and the condition(i < 5) so something bigger or smaller as long as it applies
        printf("%d\n", i);
    }

    for(int j = 0; j < 3; j++) { //prints "teyupi ftw" 3 times
        printf("teyupi ftw\n");
    }
}

/*
alternative, w/o declaring variable 'i':
for(int i = 0; i < 5; i++) { //declare it inside the for loop
    printf("%d\n", i);
}
*/
