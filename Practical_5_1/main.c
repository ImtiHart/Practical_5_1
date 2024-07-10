#include <stdio.h>
#include <stdlib.h>

/*1. Write a program to calculate the average grade of a student. The grades are stored
in an array. Use a function to calculate the average and return it.
STEPS:
• Define an array to store the student's grades.
• Create a function called calculateAverage that takes the grades array and its size
as parameters.
• Inside the function, sum up all the grades, then divide by the number of grades to
find the average.
• Return the average from the function.
• In the main function, call calculateAverage and print the result.*/

int average(int avg)
{
    int student_grades[5] = {45, 69, 76, 89, 33};
    int total_marks = 500;
    int total = 0;
    for (int x=0; x<5; x++)
    {
        total += student_grades[x];
    }
    avg = (total*100)/total_marks;
    return avg;
}

int main()
{
    int student_grades[5] = {45, 69, 76, 89, 33};
    int total_marks = 500;
    char percent = '%';
    int avg = average(avg);
    printf("The student got a average of %d%c", avg, percent);

    return 0;
}
