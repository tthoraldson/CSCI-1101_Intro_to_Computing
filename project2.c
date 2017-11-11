// C Programming - Project II
#include <stdio.h>

int main() {
    // variable initializations
    char name[] = "Theresa Thoraldson";
    int courseNumber;
    char courseTitle[] = "Introduction to Computing and Problem Solving";
    int projectNumber, currentDay, currentYear;

    // Input Course Number
    printf("Enter the Course Number:\n");
    scanf("%i", &courseNumber);

    // Input C Project Number
    printf("Enter the C Project Number (Integer)");
    scanf("%i", &projectNumber);

    // Input Current Day
    printf("Enter the Current Day (Integer):\n");
    scanf("%i", &currentDay);

    // Input Current Year
    printf("Enter the Current Year (Integer):\n");
    scanf("%i", &currentYear);

    // print statements
    printf("%s\n\n", name);
    printf("%i\n", courseNumber);
    printf("%s\n", courseTitle);
    printf("C Project %i\n\n", projectNumber);
    printf("November %i, %i\n", currentDay, currentYear);
}

// Output:

// Theresa Thoraldson
//
// 1101
// Introduction to Computing and Problem Solving
// C Project 1
//
// November 13th 2017