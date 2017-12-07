// C Programming - Project I
#include <stdio.h>

int main() {
    // VARIABLES
    char name[] = "Theresa Thoraldson";
    int courseNumber = 1101;
    char courseTitle[] = "Introduction to Computing and Problem Solving";
    int projectNumber = 1;
    char currentDate[] = "November 23rd, 2017";

    int count = 2;
    int inputPhrase;
    int numbers[3];

    // LOGIC
    printf("Enter any Three Digit Number:  ");
    scanf("%d", &inputPhrase);
    int inputPhraseCopy = inputPhrase;

    while(inputPhrase)
    {
        numbers[count] = inputPhrase % 10;
        inputPhrase /= 10;
        count--;
    }


    // OUTPUT
    printf("%s\n\n", name);
    printf("%i\n", courseNumber);
    printf("%s\n", courseTitle);
    printf("C Project %i\n\n", projectNumber);
    printf("%s\n\n", currentDate);

    printf("Original Number: %i\n", inputPhraseCopy);
    printf("Number 1: %i\n", numbers[0]);
    printf("Number 2: %i\n", numbers[1]);
    printf("Number 3: %i\n", numbers[2]);
}

// Output:

// Theresa Thoraldson
//
// 1101
// Introduction to Computing and Problem Solving
// C Project 1
//
// November 23rd 2017
//
// Original Number: 123
// Number 1: 1
// Number 2: 2
// Number 3: 3