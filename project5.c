// C Programming - Project I
#include <stdio.h>

int main() {
    // VARIABLES
    char name[] = "Theresa Thoraldson";
    int courseNumber = 1101;
    char courseTitle[] = "Introduction to Computing and Problem Solving";
    int projectNumber = 1;
    char currentDate[] = "December 1st, 2017";

    int inputValue1;
    int inputValue2;

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

    printf("Values: %i %i\n\n", inputValue1, inputValue2);



    // OUTPUT
//    printf("%s\n\n", name);
//    printf("%i\n", courseNumber);
//    printf("%s\n", courseTitle);
//    printf("C Project %i\n\n", projectNumber);
//    printf("%s\n\n", currentDate);

}