// C Programming - Project I
#include <stdio.h>

int main() {
    // variables
    char name[] = "Theresa Thoraldson";
    int courseNumber = 1101;
    char courseTitle[] = "Introduction to Computing and Problem Solving";
    int projectNumber = 1;
    char currentDate[] = "November 13th, 2017";

    int inputPhrase;
    char tempString[4];
    int number1;
    int number2;
    int number3;

    // logic
    printf("Enter any Three Digit Number:  ");
    scanf("%i", &inputPhrase);

    sprintf(tempString);
    number1 = tempString[0];
    number2 = tempString[1];
    number3 = tempString[2];


    // OUTPUT
    printf("%s\n\n", name);
    printf("%i\n", courseNumber);
    printf("%s\n", courseTitle);
    printf("C Project %i\n\n", projectNumber);
    printf("%s\n", currentDate);


}

// Output:

// Theresa Thoraldson
//
// 1101
// Introduction to Computing and Problem Solving
// C Project 1
//
// November 13th 2017