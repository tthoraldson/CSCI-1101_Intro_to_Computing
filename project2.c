// C Programming - Project II
#include <stdio.h>

int main() {
    // variable initializations
    char firstName[256];
    char lastName[256];
    int courseNumber;
    char courseTitle[] = "Introduction to Computing and Problem Solving";
    int projectNumber, currentDay, currentYear;

    // Input First Name
    printf("Please Enter Your First Name:\n");
    scanf("%s", firstName);

    // Input Last Name
    printf("Please Enter Your Last Name:\n");
    scanf("%s", lastName);

    // Input Course Number
    printf("Please enter the Course Number:\n");
    scanf("%i", &courseNumber);

    // Input C Project Number
    printf("Please enter the C Project Number (Integer):\n");
    scanf("%i", &projectNumber);

    // Input Current Day
    printf("Enter the Current Day (Integer):\n");
    scanf("%i", &currentDay);

    // Input Current Year
    printf("Enter the Current Year (Integer):\n");
    scanf("%i", &currentYear);

    // print statements
    printf("\n\n%s %s\n\n", firstName, lastName);
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
// C Project 2
//
// November 13th 2017