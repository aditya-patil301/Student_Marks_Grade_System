#include<stdio.h>

float calTotal(float marks[], int size);  // Calculate the total marks
float avg(float sum, int size);            // Calculate the average marks
char gradeSet(float average);              // Determine and print the grade based on average

// Calculates total marks from the marks array

float calTotal(float marks[], int size) {
    float sum = 0;
    int i;

    for(i = 0; i < size; i++){
        sum = sum + marks[i];
    }
    return sum;
}

// Calculate the average given the total marks and number of subjects

float avg(float sum, int size){
    float average;
    average = sum / size;  // Divide total by the number of subjects
    return average;
}

// Prints the grade based on the average

char gradeSet(float average){
    if(average <= 100 && average > 90) {
        printf("Grade obtained by student is: A");
    }
    else if(average <= 90 && average > 75) {
        printf("Grade obtained by student is: B");
    }
    else if(average <= 75 && average > 60) {
        printf("Grade obtained by student is: C");
    }
    else if(average <= 60 && average > 45) {
        printf("Grade obtained by student is: D");
    }
    else {
        printf("Fail");
    }

    return 0;
}

int main(){
    float marks[5];
    int size = 5;
    int i;
    float total;
    float average;
    char grade;  

    // Message for the user to enter marks 

    printf("Enter student's marks in 5 subject: \n");
    for(i = 0; i < size; i++){
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);  // Read each mark
    }
    printf("\n");

    // Calculate total marks and the average mark

    total = calTotal(marks, size);
    average = avg(total, size);

    printf("Student Report: \n");

    // Print marks for all subjects

    printf("Marks: \n");
    for(i = 0; i < size; i++){
        printf("Subject %d : %.2f \n", i + 1, marks[i]);
    }

    // Print total and average marks

    printf("\nTotal Marks: %.2f", total);
    printf("\nAverage Marks: %.2f", average);
    printf("\n");

    // Display the grade

    grade = gradeSet(average);

    return 0;
}
