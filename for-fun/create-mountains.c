#include<stdio.h>
#include<stdlib.h>

//FOR SETTING THE STARTING ROW
int CheckLonger(int steps, char letter, char *input) {
    int count = 1;
    int highest = 0;

    for(int i = 0; i < steps; i++) {
        if (input[i] == letter && input[i] == letter) {
            count++;
        } else {
            if (count > highest) {
                highest = count;
            }
            count = 1;
        }
    }

    return highest;
}

int CheckRow(int row, int steps, char **valley) {
    for(int i = 0; i < steps; i++) {
        if (valley[row][i] == '\\' || valley[row][i] == '/') {
            return 1;
        }
    }

    return 0;
}

int main() {
    int steps, row, column;

    //INPUT NUMBER OF STEPS
    printf("Input number of steps: ");
    scanf("%d", &steps); column = steps;

    //CREATE ARRAY FOR INPUT AND VALLEY/S
    char *input = (char *)malloc(steps * sizeof(char));
    char **valley = (char **)malloc(steps * sizeof(char*));
    for(int i = 0; i < steps; i++) {
        valley[i] = (char *)malloc(steps * sizeof(char));
    }

    //CHANGE ALL ELEMENTS TO WHITESPACE
    for(int i = 0; i < steps; i++) {
        for(int j = 0; j < steps; j++) {
            valley[i][j] = ' ';
        }
    }

    //INPUT THE UPS AND DOWNS
    printf("Enter %d of d's or u's: ", steps);
    scanf("%s", input);

    //INITIALIZE THE FIRST COLUMN
    if (CheckLonger(steps, 'u', input) >= CheckLonger(steps, 'd', input)) {
        row = CheckLonger(steps, 'u', input);
        valley[row][0] = '/'; valley[row-1][0] = '/';
        row--;
    } else {
        row = CheckLonger(steps, 'd', input);
        valley[row][0] = '\\'; valley[row-1][0] = '\\';
        row++;
    }

    //MAGIC HAPPENS
    for(int i = 1; i < column; i++) {
        if (input[i] == 'u') {
            valley[row][i] = '/'; valley[row-1][i] = '/';
        } else {
            valley[row][i] = '\\'; valley[row-1][i] = '\\';
        }

        if (input[i] == 'u' && input[i+1] == 'u') {
            row--;
        }

        if (input[i] == 'd' && input[i+1] == 'd') {
            row ++;
        }
    }

    //PRINT VALLEY
    for(int i = 0; i < column; i++) {
        if (CheckRow(i, steps, valley) == 1) {
            for(int j = 0; j < steps; j++) {
                printf("%c", valley[i][j]);
            }
            printf("\n");
        }
    }
}
