// C Programming - Project I
#include <stdio.h>

int main() {
    // VARIABLES
    char name[] = "Theresa Thoraldson";
    int courseNumber = 1101;
    char courseTitle[] = "Introduction to Computing and Problem Solving";
    int projectNumber = 5;
    char currentDate[] = "December 1st, 2017";

    int inputValue1;
    int inputValue2;
    int multiples[1000];
    int multiplesCount = 0;
    int multiplesTotal = 0;


    // LOGIC
    printf("Enter value 1: ");
    scanf("%d", &inputValue1);
    printf("Enter value 2: ");
    scanf("%d", &inputValue2);

    while(inputValue1 >= inputValue2){
        printf("Value one must be smaller than value 2. Please re-enter the values.\n\n");
        printf("Enter value 1: ");
        scanf("%d", &inputValue1);
        printf("Enter value 2: ");
        scanf("%d", &inputValue2);
    };

    // printf("Values: %i %i\n\n", inputValue1, inputValue2);

    // Find multiples of 7
    for (int i = inputValue1; i <= inputValue2; i++){
        if (i % 7 == 0){
            multiples[multiplesCount] = i;
            multiplesCount++;
        }
    }

    // Add all multiples in multiples[]
    for (int i = 0; i < multiplesCount; i++){
        multiplesTotal += multiples[i];
    }



    // OUTPUT
    // print statements
    printf("%s\n\n", name);
    printf("%i\n", courseNumber);
    printf("%s\n", courseTitle);
    printf("C Project %i\n\n", projectNumber);
    printf("%s\n", currentDate);

    printf("List of multiples: ");
    for (int i = 0; i < multiplesCount; i++){
        printf("%i, " , multiples[i]);
    }
    printf("\n");

    printf("Count: %i\n", multiplesTotal);
}